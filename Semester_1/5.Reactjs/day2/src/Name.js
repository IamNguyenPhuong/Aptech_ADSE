import React, { useState } from "react";

function Name() {
  const [name, setName] = useState("Người dùng");
  // Hàm đổi tên
  const handleChangeName = () => {
    if (name === "Người dùng" || name === "Nguyễn Văn B") {
      setName("Nguyễn Văn A");
    } else if (name === "Nguyễn Văn A") {
      setName("Nguyễn Văn B");
    }
  };

  return (
    <div>
      <h1>Tên của bạn là: {name}</h1>
      <button onClick={handleChangeName}>Đổi tên</button>
    </div>
  );
}

export default Name;
