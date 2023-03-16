start

var arr[5][5] as integer
var i,j as integer

for i=0 to 5 do
	for j=0 to 5 do
		read arr[i][j]
		j=j+1
	end for	
	i=i+1
end for
for i=0 to 5 do
	for j=0 to 5 do
		write arr[i][j]	
		j=j+1
	end for
	i=i+1
end for 

stop		