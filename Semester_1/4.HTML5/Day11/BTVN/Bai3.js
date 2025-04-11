// Mock database (array to store plants)
let plantList = [
  {
    maThucVat: "TV001",
    ten: "Nguyen Van A",
    gioiTinh: "Đực",
    noiSong: "Rừng",
    chieuCao: 20,
    ngaySinh: "2020-01-01",
    soThich: "Nắng, Mưa",
  },
  {
    maThucVat: "TV002",
    ten: "Tran Thi B",
    gioiTinh: "Cái",
    noiSong: "Vườn",
    chieuCao: 15,
    ngaySinh: "2021-02-02",
    soThich: "Gió",
  },
];

// Get form elements
let maThucVat = document.getElementById("maThucVat");
let ten = document.getElementById("ten");
let chieuCao = document.getElementById("chieuCao");
let ngaySinh = document.getElementById("ngaySinh");
let noiSong = document.getElementById("noiSong");

// Variable to track the index of the plant being edited
let editIndex = -1;

// Reset form function
function Reset() {
  document.getElementById("maThucVat").value = "";
  document.getElementById("ten").value = "";
  document.getElementById("chieuCao").value = "";
  document.getElementById("ngaySinh").value = "";
  document.getElementById("noiSong").value = "";
  document
    .querySelectorAll('input[name="gioiTinh"]')
    .forEach((radio) => (radio.checked = false));
  document
    .querySelectorAll('input[name="soThich"]')
    .forEach((checkbox) => (checkbox.checked = false));
  document.getElementById("maThucVatError").textContent = "";
  document.getElementById("tenError").textContent = "";
  document.getElementById("gioiTinhError").textContent = "";
  document.getElementById("noiSongError").textContent = "";
  document.getElementById("chieuCaoError").textContent = "";
  document.getElementById("ngaySinhError").textContent = "";
  document.getElementById("soThichError").textContent = "";
  document.getElementById("updateBtn").disabled = true;
  editIndex = -1;
}

// Validate form function
function validateForm() {
  let isValid = true;

  // Get values
  let maThucVatValue = maThucVat.value.trim();
  let tenValue = ten.value.trim();
  let gioiTinhValue = document.querySelector('input[name="gioiTinh"]:checked');
  let noiSongValue = noiSong.value;
  let chieuCaoValue = chieuCao.value;
  let ngaySinhValue = ngaySinh.value;
  let soThichValue = document.querySelectorAll('input[name="soThich"]:checked');

  // Reset error messages
  document.getElementById("maThucVatError").textContent = "";
  document.getElementById("tenError").textContent = "";
  document.getElementById("gioiTinhError").textContent = "";
  document.getElementById("noiSongError").textContent = "";
  document.getElementById("chieuCaoError").textContent = "";
  document.getElementById("ngaySinhError").textContent = "";
  document.getElementById("soThichError").textContent = "";

  // Validate empty fields and conditions
  if (!maThucVatValue) {
    document.getElementById("maThucVatError").textContent =
      "Mã thực vật không được để trống";
    isValid = false;
  } else if (
    editIndex === -1 &&
    plantList.some((plant) => plant.maThucVat === maThucVatValue)
  ) {
    document.getElementById("maThucVatError").textContent =
      "Mã thực vật đã tồn tại";
    isValid = false;
  }
  if (!tenValue) {
    document.getElementById("tenError").textContent = "Tên không được để trống";
    isValid = false;
  }
  if (!gioiTinhValue) {
    document.getElementById("gioiTinhError").textContent =
      "Vui lòng chọn giới tính";
    isValid = false;
  }
  if (!noiSongValue) {
    document.getElementById("noiSongError").textContent =
      "Vui lòng chọn nơi sống";
    isValid = false;
  }
  if (!chieuCaoValue || chieuCaoValue <= 0) {
    document.getElementById("chieuCaoError").textContent =
      "Chiều cao phải lớn hơn 0";
    isValid = false;
  }
  if (!ngaySinhValue) {
    document.getElementById("ngaySinhError").textContent =
      "Vui lòng chọn ngày sinh";
    isValid = false;
  }
  if (soThichValue.length === 0) {
    document.getElementById("soThichError").textContent =
      "Vui lòng chọn ít nhất một sở thích";
    isValid = false;
  }

  return isValid;
}

// Add plant function
function addPlant() {
  if (!validateForm()) return;

  // Get values
  let maThucVatValue = maThucVat.value.trim();
  let tenValue = ten.value.trim();
  let gioiTinhValue = document.querySelector(
    'input[name="gioiTinh"]:checked'
  ).value;
  let noiSongValue = noiSong.value;
  let chieuCaoValue = parseFloat(chieuCao.value);
  let ngaySinhValue = ngaySinh.value;
  let soThichValue = Array.from(
    document.querySelectorAll('input[name="soThich"]:checked')
  )
    .map((cb) => cb.value)
    .join(", ");

  // Create new plant object
  let newPlant = {
    maThucVat: maThucVatValue,
    ten: tenValue,
    gioiTinh: gioiTinhValue,
    noiSong: noiSongValue,
    chieuCao: chieuCaoValue,
    ngaySinh: ngaySinhValue,
    soThich: soThichValue,
  };

  // Add to plantList
  plantList.push(newPlant);

  // Update table
  const tbody = document.getElementById("plantList");
  tbody.innerHTML = "";
  Add();

  // Reset form
  Reset();
}

// Update plant function
function updatePlant() {
  if (!validateForm()) return;

  // Get values
  let maThucVatValue = maThucVat.value.trim();
  let tenValue = ten.value.trim();
  let gioiTinhValue = document.querySelector(
    'input[name="gioiTinh"]:checked'
  ).value;
  let noiSongValue = noiSong.value;
  let chieuCaoValue = parseFloat(chieuCao.value);
  let ngaySinhValue = ngaySinh.value;
  let soThichValue = Array.from(
    document.querySelectorAll('input[name="soThich"]:checked')
  )
    .map((cb) => cb.value)
    .join(", ");

  // Update plant in plantList
  plantList[editIndex] = {
    maThucVat: maThucVatValue,
    ten: tenValue,
    gioiTinh: gioiTinhValue,
    noiSong: noiSongValue,
    chieuCao: chieuCaoValue,
    ngaySinh: ngaySinhValue,
    soThich: soThichValue,
  };

  // Update table
  const tbody = document.getElementById("plantList");
  tbody.innerHTML = "";
  Add();

  // Reset form
  Reset();
}

// Render table function (similar to Add in reference)
function Add() {
  const tbody = document.getElementById("plantList");
  for (let i = 0; i < plantList.length; i++) {
    const plant = plantList[i];
    tbody.innerHTML += `
            <tr>
                <td>${i + 1}</td>
                <td>${plant.maThucVat}</td>
                <td>${plant.ten}</td>
                <td>${plant.gioiTinh}</td>
                <td>${plant.noiSong}</td>
                <td>${plant.chieuCao}</td>
                <td>${plant.ngaySinh}</td>
                <td>${plant.soThich}</td>
                <td>
                    <button onclick="DetailPlant('${
                      plant.maThucVat
                    }')">Sửa</button>
                </td>
            </tr>`;
  }
}

// Edit plant function (similar to DetailSV in reference)
function DetailPlant(maThucVat) {
  for (let i = 0; i < plantList.length; i++) {
    if (plantList[i].maThucVat === maThucVat) {
      editIndex = i;
      const plant = plantList[i];
      document.getElementById("maThucVat").value = plant.maThucVat;
      document.getElementById("ten").value = plant.ten;
      document.querySelector(
        `input[name="gioiTinh"][value="${plant.gioiTinh}"]`
      ).checked = true;
      document.getElementById("noiSong").value = plant.noiSong;
      document.getElementById("chieuCao").value = plant.chieuCao;
      document.getElementById("ngaySinh").value = plant.ngaySinh;
      document.querySelectorAll('input[name="soThich"]').forEach((cb) => {
        cb.checked = plant.soThich.split(", ").includes(cb.value);
      });
      document.getElementById("updateBtn").disabled = false;
      break;
    }
  }
}

// Initial render of the plant list
Add();
