### Grammar

	statements		->		statements statement | statement
	statement		->		ID:=expression1;
						|	IF expression1 then statement
						|	while expression1 do statement
						|	expression1;
						|	begin  stmt_list end
	stmt_list		->		statement stmt_list
						|	epsilon
	expression1		->		expression
						|	expression<expression
						|	expression=expression
						|	expression>expression
	expression		->		term expression'
	expression'		->		+ term expression'
						|	- term expression'
						|	epsilon
	term			->		factor term'
	term'			->		* factor term'
						|	/ factor term'
						|	epsilon
	factor			->		NUM_OR_ID
						|	( expression )


#### Usage

	$ cd src/
	$ make
	$ ./main  <  sample_test.txt


#### Output

Lexemes	- 'Lexemes.txt'

Intermediate Representation - 'Intermediate.txt'

Assembly Code of x86 - 'Assembly.asm'
