default: functions
	@echo "Executing functions"
	@./functions

functions: functions.cpp
	@echo "Compiling functions.cpp"
	@g++ -Wall -Wextra -Werror functions.cpp -o functions

clean:
	@echo "Deleting executables"
	@rm functions
