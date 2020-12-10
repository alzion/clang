def my_roman_numerals_converter(num)
    size = num.to_s.length()
    roman_num = ""  

    while size != 0
        if size == 4 
            remainder = num % 1000 
            num = num / 1000
            case num
            when 1
	            roman_num.concat('M')
            when 2
	            roman_num.concat('MM')
            when 3
	            roman_num.concat('MMM')
            end
            num = remainder
            size -= 1

        elsif size == 3 
            remainder = num % 100 
            num = num / 100
            case num
            when 1
	            roman_num.concat('C')
            when 2
	            roman_num.concat('CC')
            when 3
	            roman_num.concat('CCC')
            when 4
	            roman_num.concat('CD')
            when 5
	            roman_num.concat('D')
            when 6
	            roman_num.concat('DC')
            when 7
	            roman_num.concat('DCC')
            when 8 
	            roman_num.concat('DCCC')
            when 9
	            roman_num.concat('CM')
            end
            num = remainder
            size -= 1

        elsif size == 2
            remainder = num % 10 
            num = num / 10
            case num
            when 1
	            roman_num.concat('X')
            when 2
	            roman_num.concat('XX')
            when 3
	            roman_num.concat('XXX')
            when 4
	            roman_num.concat('XL')
            when 5
	            roman_num.concat('L')
            when 6
	            roman_num.concat('LX')
            when 7
	            roman_num.concat('LXX')
            when 8 
	            roman_num.concat('LXXX')
            when 9
	            roman_num.concat('XC')
            end
            num = remainder
            size -= 1

        elsif size == 1
            case num
            when 1
	            roman_num.concat('I')
            when 2
	            roman_num.concat('II')
            when 3
	            roman_num.concat('III')
            when 4
	            roman_num.concat('IV')
            when 5
	            roman_num.concat('V')
            when 6
	            roman_num.concat('VI')
            when 7
	            roman_num.concat('VII')
            when 8 
	            roman_num.concat('VIII')
            when 9
	            roman_num.concat('IX')
            end
            size -= 1
            
        end
    end
    
    return roman_num
   
end

#puts my_roman_numerals_converter(14)
#puts my_roman_numerals_converter(79)
#puts my_roman_numerals_converter(845)
#puts my_roman_numerals_converter(2022)
