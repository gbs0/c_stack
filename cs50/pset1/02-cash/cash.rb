require 'pry'

def calcDraw(cents)
  amount_left = nil
  coins = [ 25, 10, 5 , 1 ]
  draw = []

  n = coins.length
  sortCoins = coins.reverse
  i = n - 1
  begin
    
    while(cents >= sortCoins[i])
      cents -= sortCoins[i]
      draw.push(sortCoins[i])
    end

    i -= 1

    # i -= 1
    # while(amount_left >= coins[1] )
    #   amount_left -= coins[1]
    #   draw += 1
    # end
  end while i >= 0

  return draw
end

loop do
  print("Insert Money\n")
  print("$")
  
  input = gets.chomp.to_f
  cents = input * 100.round(2)
  p calcDraw(cents).length
end

