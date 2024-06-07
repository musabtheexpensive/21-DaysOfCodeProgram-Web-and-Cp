function handleContact(event) {
  event.preventDefault();
  name=event.target.name.value;
  email=event.target.email.value;
  message=event.target.message.value;
  console.log("contact form submitted");
  console.log(name, email,message);
}
