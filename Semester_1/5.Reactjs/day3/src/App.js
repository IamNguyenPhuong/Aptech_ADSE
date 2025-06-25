import { getElementError } from "@testing-library/dom";
import React, { useState } from "react";
function App() {
  const [a, setA] = useState("");
  const [b, setB] = useState("");
  const [count, setCount] = useState(0);

  const handleCount = () => {
    setCount(Number(a) + Number(b));
  };

  return (
    <div>
      <h1>Count 2 numbers</h1>
      <input
        id="a"
        value={a}
        onChange={(e) => setA(e.target.value)}
        type="number"
      />
      <br />
      <input
        id="b"
        value={b}
        onChange={(e) => setB(e.target.value)}
        type="number"
      />
      <br />
      <button onClick={handleCount}>Click me</button>
      <p id="c">{count}</p>
    </div>
  );
}
export default App;
