all: project add compile

project:
	@cd ~

	@if ! [ -d "public_html" ] ; then\
		mkdir public_html;\
	fi

	@cp binary_converter.c public_html
	@cp index.html public_html

	@chmod 755 public_html

	@cd public_html; \
		if ! [ -d "cgi-bin" ] ; then\
			mkdir cgi-bin;\
			chmod 755 cgi-bin;\
			chmod 755 index.html;\
		fi

add:
	@cd ~

	@cd public_html; \
		git init;\
		git add *;\
		git commit -m "initialize repository";\

compile:
	@cd ~

	@cd public_html; \
		gcc -o binary_converter.cgi binary_converter.c;\
		chmod 755 binary_converter.cgi;\
		mv binary_converter.cgi cgi-bin/;\
