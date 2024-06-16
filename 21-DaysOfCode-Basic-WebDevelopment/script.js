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
    url: "./images/project/image 1.png",
  },
  {
    name: "image1",
    url: "./images/project/image 2.png",
  },
  {
    name: "image1",
    url: "./images/project/image 3.png",
  },
  {
    name: "image1",
    url: "./images/project/image 4.png",
  },
];

// for (const item of imageArray) {
//   console.log(item);
// }
// const imageLength = imageArray.length;
// console.log(imageLength);
// for (let index = 0; index < imageLength; index++) {
//   console.log(index);
//   console.log(imageArray[index]);
// }

// check all project button action start here
function handleShowMoreProject() {
  const projectContainer = document.getElementById("projects");

  for (const item of imageArray) {
    const projectDivImage = document.createElement("div");
    projectDivImage.innerHTML = `
    <img src="${item.url}" alt="">`;
    projectContainer.appendChild(projectDivImage);
    console.log(projectDivImage);
  }
  console.log("click", projectContainer);
}
