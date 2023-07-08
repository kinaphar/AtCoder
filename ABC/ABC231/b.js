// inputに入力データ全体が入る
function Main(input) {
  input = input.split("\n"); //split: Stringを配列に分割 input[0], input[1]...
  n = input[0];
  // console.log(n);
  var votes = {};
  for (let i = 1; i <= n; i++) {
    if (votes[input[i]] === undefined) {
      votes[input[i]] = 1;
    } else {
      votes[input[i]] += 1;
    }
  }

  var maxVote = 0;
  var maxCandidate = "";
  Object.keys(votes).forEach((key) => {
    if (votes[key] > maxVote) {
      maxVote = votes[key];
      maxCandidate = key;
    }
  });

  console.log(maxCandidate);
}

Main(require("fs").readFileSync("/dev/stdin", "utf8"));
