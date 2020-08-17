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
  	plaintext = @plaintext.split('')
  	cyphertext = []


  	plaintext.each{ |letter| letter.match(/[ˆa-z]/i) ? cyphertext.push(letter.bytes) : cyphertext.push(letter) }




  	cyphertext.each{ |ascii| puts ascii[0].chr } # Converting all ascci back to string
  	
  end

  

end

c = Caesar.new

c.calcCypher

