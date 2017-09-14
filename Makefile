CXX= g++
CXXFLAGS= -Wall -g -Werror -o

all: git-commit fca

fca:
	$(CXX) $(CXXFLAGS) fca fca.cpp

git-commit:
	git add *.cpp *.h Makefile >> .local.git.out || echo
	git commit -m "Commit by $(USER)" >> .local.git.out || echo
	git push

clean:
	rm *.o
