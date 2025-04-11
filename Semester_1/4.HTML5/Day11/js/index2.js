let msv = document.getElementById("MSV");
let name = document.getElementById("name");
let age = document.getElementById("age");
let address = document.getElementById("address");

let studentList = [
  {
    msv: "MSV001",
    name: "Nguyen Van A",
    age: 20,
    address: "Ha Noi",
    gender: "Nam",
    suject: "CTDL",
  },
  {
    msv: "MSV002",
    name: "Nguyen Van B",
    age: 21,
    address: "Da Nang",
    gender: "Nam",
    suject: "CTDL",
  },
  {
    msv: "MSV003",
    name: "Nguyen Van C",
    age: 22,
    address: "Ho Chi Minh",
    gender: "Nam",
    suject: "CTDL",
  },
];

function Reset() {
  document.getElementById("MSV").value = " ";
  document.getElementById("name").value = "";
  document.getElementById("age").value = "";
  document.getElementById("address").value = "";
}
function Add() {
  const tbody = document.getElementById("table-body");
  for (let i = 0; i < studentList.length; i++) {
    const sv = studentList[i];
    tbody.innerHTML += ` <tr>
            <td>${i + 1}</td>
            <td>${sv.msv}</td>
            <td>${sv.name}</td> 
            <td>${sv.age}</td>
            <td>${sv.address}</td>
            <td>${sv.gender}</td>
            <td>${sv.suject}</td>
            <td>
             <button onclick="XoaSV('${sv.msv}')">Xoa</button>
            <button onclick="DetailSV('${sv.msv}')">Sua</button>
            </td>
           
         </tr>`;
  }
}
Add();
function Update() {}
function Delete() {}
function XoaSV(msv) {
  const tbody = document.getElementById("table-body");
  for (let i = 0; i < studentList.length; i++) {
    if (studentList[i].msv === msv) {
      studentList.splice(i, 1);
      tbody.innerHTML = "";
      Add();
      break;
    }
  }
}
