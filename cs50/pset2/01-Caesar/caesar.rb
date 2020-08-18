require 'pry'
# Caesar script for encrypt some string
class Caesar
  ALPHA = [*"A".."Z"] # Range for alphabet

  def initialize
  	@args_key = ARGV[0];
	  @plaintext = ARGV[1];
  end

  def calcCypher
  	# cypher_index = (plain_index + args_key) % 26 # Factor for get key cypher index	
  	key = @args_key.to_i    
  	cyphertext = []


  	# @plaintext.each_char{|l| p true if l.match(/[ˆa-z]/i)}
    # @plaintext.each_char{ |letter| letter.match(/[ˆa-z]/i) ? cyphertext.push(letter.bytes) : cyphertext.push(letter) }
    @plaintext.each_char do |l|
      if (l.match?(/[ˆa-z]/i))

        if(l.match?(/[[:upper:]]/))
          char_byte = l.bytes.first.to_i
          low_ascii = "a".bytes[0]
          puts (char_byte - low_ascii + key) % 26 + low_ascii
        end

      else



      end
    end




  	cyphertext.each{ |ascii| puts ascii[0].chr } # Converting all ascci back to string
  	
  end

  

end

c = Caesar.new

c.calcCypher

