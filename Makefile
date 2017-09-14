CXX= g++
CXXFLAGS= -Wall -g -Werror

all: git-commit fca

fca:
	$(CXX) $(CXXFLAGS) fca.cpp -o fca

git-commit:
	git add *.cpp *.h Makefile >> .local.git.out || echo
	git commit -m "Commit by $(USER)" >> .local.git.out || echo
	git push

clean:
	rm *.o
