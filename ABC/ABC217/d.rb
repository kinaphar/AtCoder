l,q = gets.chomp.split(" ").map(&:to_i)
wood = Array.new(l, 0)
wood[0] = 1
wood[l] = 1

# p "wood is #{wood}"

ary = Array.new

for i in 1..q do
  ary.push(gets.chomp.split(" "))
end

for i in 1..q do
  # p "loop in!"
  c = ary[i-1][0].to_i
  x = ary[i-1][1].to_i

  if c == 1 then
    wood[x] = 1
    # p wood

  else
    minx = x
    # p "minx default is #{minx}"

    (x-1).downto(0.to_i){|j|
      # p "now j is #{j}"
      if wood[j] == 1 then
        minx = j
        # puts "j is #{j}"
        break
      end
    }

    maxx = x
    # p "maxx default is #{maxx}"
    for k in (x+1)..(l+1) do
      if wood[k] == 1 then
        maxx = k
        # puts "k is #{k}"
        break
      end
    end
    puts maxx - minx
  end
end

