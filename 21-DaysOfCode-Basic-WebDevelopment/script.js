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
// for loop example
const imageArray = [
  {
    name: "image1",
    url: "https://picsum.photos/200/300",
  },
  {
    name: "image1",
    url: "https://picsum.photos/200/300",
  },
  {
    name: "image1",
    url: "https://picsum.photos/200/300",
  },
];

for (const item of imageArray) {
  console.log(item);
}
for (let index = 0; index < 500; index++) {
  console.log(index);
}
