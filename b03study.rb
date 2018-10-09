n = gets.to_i
a = gets.split.map(&:to_i)

isBreak = false
count = 0
while true
  for i in 1..n
    if a[i-1] % 2 == 1
      puts count
      isBreak = true
      break
    else
      a[i-1] = a[i-1]/2
    end
  end
  count += 1
  break if isBreak
end
