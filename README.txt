P1 by Pascal Odijk Last Updated 9/8/2021
CMPSCI 4760 Prof. Bhatia

--------------------------------------------------------
To compile program:
make driver

To clean:
make clean
--------------------------------------------------------
Methods of invocation:
	./driver -- prints messages to output file messages.log
	./driver -h -- prints usage message
	./driver -t sec -- prints messages on average every sec seconds
	./driver [file name] -- prints messages to specified output file name
--------------------------------------------------------
Problems I encountered:
1. I may have not used perror enough, but I used it where I though necessary
2. The program may create an additional message at the end, not sure why its doing that
3. I'm not sure if I implemented the -t sec option correctly...it was a bit confusing
---------------------------------------------------------
Github version control web address:
https://github.com/Atmosfear-OD/CS4760-OS-P1
