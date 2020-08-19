require 'pry'

class Caesar
  ALPHA = [*"A".."Z"]

  def initialize
  	@args_key = ARGV[0];
	  @plaintext = ARGV[1];
  end

  def calcCypher
  	# cypher_index = (plain_index + args_key) % 26 # Factor for get key cypher index	
  	key = @args_key.to_i  
    plaintext = @plaintext.to_s  
  	cyphertext = []


    plaintext.each_char do |l|
      
      if (l.match?(/[ˆa-z]/i))

        if(l.match?(/[[:upper:]]/))
          cyphertext.push((l.bytes.first[0] - "A".bytes.first + key) % 26 + "A".bytes.first)
          binding.pry
        end

      end
    end

  	# cyphertext.each{ |ascii| puts ascii[0].chr } # Converting all ascci back to string
    p cyphertext	
  end

  private

  def calcIndex(letterToAscii, caseToAscii)
    (letterToAscii - caseToAscii)
  end
end

c = Caesar.new

c.calcCypher

