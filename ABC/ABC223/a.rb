# 整数の入力
a = gets.to_i
# スペース区切りの整数の入力
if a%100 == 0 && a>0 then
  print("Yes\n")
else
  print("No\n")
end
