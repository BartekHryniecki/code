
const date = document.getElementById('date')
const setCurrentYear = () => {
	const currentYear = new Date().getFullYear()
	date.textContent = currentYear
}
setCurrentYear()

// hamburger menu
const hamburger = document.querySelector('.hamburger')
const navList = document.querySelector('.nav-list')
const socials = document.querySelector('.social-nav')
const navLinks = document.querySelectorAll('.nav-links')

const toggleMobileMenu = () => {
	hamburger.classList.toggle('open')
	navList.classList.toggle('open')
	socials.classList.toggle('open')
	document.body.classList.toggle('open')
}

navLinks.forEach(link => link.addEventListener('click', toggleMobileMenu))
hamburger.addEventListener('click', toggleMobileMenu)

// initialize aos (library for scrolling)
AOS.init()

//emailJS
function sendMail(){
	var params = {
		Name: document.getElementById("Name").value,
		Subject: document.getElementById("Subject").value,
		Message: document.getElementById("Message").value,
	};

	const serviceID = "bartekhryniecki123";
	const templateID = "template_x1m9i2h";

	emailjs
	.send(serviceID, templateID, params)
	.then ((res) => {
		document.getElementById("Name").value = "";
		document.getElementById("Subject").value = "";
		document.getElementById("Message").value = "";
		console.log(res);
		alert("Your message was sent successfully");
	})
	.catch((err) => console.log(err));
}
