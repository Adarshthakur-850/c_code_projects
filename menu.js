menu = document.querySelector("#MenuBtns")
navlist = document.getElementsByClassName("navlist")[0]
isClosed = true

menu.addEventListener('click',function(){
    if(isClosed){
        navlist.style.top = "80px"
        menu.innerHTML = ""
        menu.innerHTML = '<i class="fa-solid fa-xmark"></i>'
        isClosed = false
    }else if(isClosed == false){
        navlist.style.top = "-500px"
        menu.innerHTML = ""
        menu.innerHTML = '<i class="fas fa-bars"></i>'
        isClosed = true
    }
})
