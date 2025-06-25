// src/components/ExampleComponent.js
import React, { useState } from "react";

function ExampleComponent() {
  const [count, setCount] = useState(0); // Sử dụng state

  const handleClick = () => {
    setCount(count + 1); // Cập nhật state khi người dùng tương tác
  };

  return (
    <div>
      <p>Bạn đã nhấn {count} lần</p>
      <button onClick={handleClick}>Nhấn vào đây</button>
    </div>
  );
}

export default ExampleComponent;
