s = gets.chomp
news = s.split('').uniq()
ans = 'No'
if news.length() == 4 && (news.include?('S') && news.include?('N') && news.include?('W') && news.include?('E'))
  ans = 'Yes'
elsif news.length() == 2 && ((news.include?('S') && news.include?('N')) || (news.include?('W') && news.include?('E')))
  ans = "Yes"
end

puts ans