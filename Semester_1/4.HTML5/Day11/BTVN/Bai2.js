function validateForm() {
  // Get all input values
  const username = document.getElementById("username").value.trim();
  const password = document.getElementById("password").value.trim();
  const email = document.getElementById("email").value.trim();
  const age = document.getElementById("age").value;
  const dob = document.getElementById("dob").value;
  const phone = document.getElementById("phone").value.trim();
  const website = document.getElementById("website").value.trim();
  const gender = document.querySelector('input[name="gender"]:checked');
  const interests = document.querySelectorAll(
    'input[name="interests"]:checked'
  );
  const bio = document.getElementById("bio").value.trim();
  const resume = document.getElementById("resume").files;
  const experience = document.getElementById("experience").value;

  // Get all error elements
  const usernameError = document.getElementById("usernameError");
  const passwordError = document.getElementById("passwordError");
  const emailError = document.getElementById("emailError");
  const ageError = document.getElementById("ageError");
  const dobError = document.getElementById("dobError");
  const phoneError = document.getElementById("phoneError");
  const websiteError = document.getElementById("websiteError");
  const genderError = document.getElementById("genderError");
  const interestsError = document.getElementById("interestsError");
  const bioError = document.getElementById("bioError");
  const resumeError = document.getElementById("resumeError");
  const experienceError = document.getElementById("experienceError");

  // Reset all error messages
  usernameError.style.display = "none";
  passwordError.style.display = "none";
  emailError.style.display = "none";
  ageError.style.display = "none";
  dobError.style.display = "none";
  phoneError.style.display = "none";
  websiteError.style.display = "none";
  genderError.style.display = "none";
  interestsError.style.display = "none";
  bioError.style.display = "none";
  resumeError.style.display = "none";
  experienceError.style.display = "none";

  // Validation flag
  let isValid = true;

  // Validate empty fields
  if (!username) {
    usernameError.style.display = "block";
    isValid = false;
  }
  if (!password) {
    passwordError.style.display = "block";
    isValid = false;
  }
  if (!email) {
    emailError.style.display = "block";
    isValid = false;
  }
  if (!age || age <= 0) {
    ageError.style.display = "block";
    isValid = false;
  }
  if (!dob) {
    dobError.style.display = "block";
    isValid = false;
  }
  if (!phone) {
    phoneError.style.display = "block";
    isValid = false;
  }
  if (!website) {
    websiteError.style.display = "block";
    isValid = false;
  }
  if (!gender) {
    genderError.style.display = "block";
    isValid = false;
  }
  if (interests.length === 0) {
    interestsError.style.display = "block";
    isValid = false;
  }
  if (!bio) {
    bioError.style.display = "block";
    isValid = false;
  }
  if (resume.length === 0) {
    resumeError.style.display = "block";
    isValid = false;
  }
  if (experience == 0) {
    // Assuming 0 means "not set"
    experienceError.style.display = "block";
    isValid = false;
  }

  // If all fields are filled, check Username and Password
  if (isValid) {
    // Username must be "phuong", Password must be "123456"
    if (username === "phuong" && password === "123456") {
      alert("Đăng ký thành công");
    } else {
      alert("Đăng ký thất bại");
    }
  }
}
