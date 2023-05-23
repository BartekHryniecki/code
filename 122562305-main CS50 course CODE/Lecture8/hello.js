
document.addEventListener("DOMContentLoaded", function() {
    document.querySelector("form").addEventListiner("submit", function(event) {
        let name = document.querySelector("#name").value;
        alert("hello, " + name);
        event.preventDefault();
    });
});

