all:
	lex -o lex.yy.c src/file.l
	yacc -d -o y.tab.c src/file.y
	cc -o file y.tab.c -ll -Ly

git:
	
	git commit -am "part 3 start"
	git push -u origin Part3
	
run:
	$(MAKE) all
	./file < test.txt

