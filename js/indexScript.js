var select1 = document.getElementById("select1");
var select2 = document.getElementById("select2");
select1.onchange = function() {
    // empty select2
    while (select2.firstChild) {
        select2.removeChild(select2.firstChild);
    }
    if (select1.selectedIndex == 0) {
        return;
    }
    for (var i = select1.selectedIndex; i < select1.options.length; i++) {
        var o = document.createElement("option");
        o.value = select1.options[i].value;
        o.text = select1.options[i].text;
        select2.appendChild(o);
    }
}
