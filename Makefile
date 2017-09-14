CXX= g++
STD= -std=c++11
CXXFLAGS= -Wall -g -Werror

all: git-commit fca

fca:
	$(CXX) $(STD) $(CXXFLAGS) fca.cpp -o fca.o

git-commit:
	git add *.cpp *.h Makefile >> .local.git.out || echo
	git commit -m "Commit by $(USER)" >> .local.git.out || echo
	git push

clean:
	rm *.o
