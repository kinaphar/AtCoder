vn,vm = gets.split.map(&:to_i)
a = (2*vn).times.map { gets.chomp.chars }

# プレイヤー情報　(順位, 勝ち数)
vp = Array.new(2*vn, Array.new(2, 1) )
# vp = [[2, 3], [5, 3], [11, 3], [17, 3]]

p vp
# [[0, 0], [0, 0], [0, 0], [0, 0]]

# GCPはモンチなので012に変える
for i in 1..(2*vn) do
  vp[i-1][0] = i

  a[i-1].map!{|x| x=="G" ? "0" : x}
  a[i-1].map!{|x| x=="C" ? "1" : x}
  a[i-1].map!{|x| x=="P" ? "2" : x}
end

p a

p vp

# (3 + P - G)%3

# for i in 1..n do
#   vp[2*i-1]
#   vp[2*i]
# end

# for i in 1..vm do
  
# end


# 2 3
# GCP
# PPP
# CCC
# PPC

# 1 G w0 C w1 P w1
# 2 P w1 P w1 P w1
# 3 C w1 C w2 C w3
# 4 P w0 P w0 C w1

# 3
# 1
# 2
# 4

