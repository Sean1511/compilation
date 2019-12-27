all:
	lex -o lex.yy.c src/file.l
	yacc -d -o y.tab.c src/file.y
	cc -o file y.tab.c -ll -Ly

git:
	git config --global user.name "Sean1511"
	git commit -am "part 2"
	git push -u origin Part2
	
run:
	$(MAKE) all
	./file < test.txt

