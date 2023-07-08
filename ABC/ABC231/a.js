// inputに入力データ全体が入る
function Main(input) {
  var d = parseInt(input, 10);
  d.toFixed(9);
  console.log("%d", d / 100);
}

Main(require("fs").readFileSync("/dev/stdin", "utf8")); //
