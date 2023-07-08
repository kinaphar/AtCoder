// inputに入力データ全体が入る
function Main(input) {
  input = input.split("\n"); //split: Stringを配列に分割 input[0], input[1]...
  line1 = input[0].split(" ");
  n = line1[0];
  q = line1[1];
  temp = input[1].split(" ");
  students = temp.map((student) => {
    parseInt(student, 10);
  });

  var f = function (a, b) {
    return a - b;
  };
  console.log(students.sort(f));
}

Main(require("fs").readFileSync("/dev/stdin", "utf8"));
