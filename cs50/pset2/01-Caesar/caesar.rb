class Caesar
  ALPHA = [*"A".."Z"]

  def initialize
  	@args_key = ARGV[0];
	  @plaintext = ARGV[1];
  end

  def calcCypher
  	key = @args_key.to_i  
    plaintext = @plaintext.to_s  
  	cyphertext = []


    plaintext.each_char do |l|
      if (l.match?(/[ˆa-z]/i))

        
        if (l.match?(/[[:upper:]]/))
          cyphertext.push(calcIndex({letterToAscii: l.bytes[0], caseToAscii: "A".bytes.first, key: key}))
        else
          cyphertext.push(calcIndex(letterToAscii: l.bytes[0], caseToAscii: "a".bytes.first, key: key))  
        end


      else

        cyphertext.push(l)
      
      end
    end

  	cyphertext.each { |ascii| print ascii.chr }

  end

  def calcIndex(attr)
    attr[:letterToAscii] - attr[:caseToAscii] + attr[:key] % 26 + attr[:caseToAscii]
  end

end

c = Caesar.new
c.calcCypher

