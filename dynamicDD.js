$(document).ready(function() {
 $.getJSON("getStates.php", success = function(data)
{
    var options = " ";
    for(var i = 0; i < data.length; i++)
    {
        options += "<options value =' " +  data[i].toLowerCase() + "'>" + data[i] + "</option>";
    }

    $("slctStates").append(options);
    $("slctStates").change();
});
$("slctStates").change(function()
{
    $.getJSON("getParks.php?States =" + $(this).val(), success = function(data)
    {
        var options = " ";
        for(var i = 0; i < data.length; i++)
        {
            options += "<options value =' " +  data[i].toLowerCase() + "'>" + data[i] + "</option>";
        }
        
        $("slctPark").html("");
        $("slctPark").append(options);
    });  

});


});
