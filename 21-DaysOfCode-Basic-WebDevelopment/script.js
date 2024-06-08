function handleContact(event) {
  event.preventDefault();
  name = event.target.name.value;
  email = event.target.email.value;
  message = event.target.message.value;

  const successContainer = document.getElementById("success_container");
  const nameParagraph = document.createElement("p");
  nameParagraph.innerHTML = `Your Name: ${name}`;

  const emailParagraph = document.createElement("p");
  emailParagraph.innerHTML = `Your Name: ${name}`;

  const messageParagraph = document.createElement("p");
  messageParagraph.innerHTML = `Your Name: ${name}`;

  successContainer.appendChild(nameParagraph);
  successContainer.appendChild(emailParagraph);
  successContainer.appendChild(messageParagraph);
}
