
# My Custom Libraries in C

## Libpf
	My version of printf in c.

	Supports:
		Specifier: 		d i o u x X c s f p 
		Flags:			- + # 0
		Width:			(number) *
		Precision:		.number .*
		Spec. length:		hh h l ll z j L

	Personal addons:
		Color macro:		{RED} {GREEN} {RESET} etc.
		Custom color:		{CLR:'number'}
		Emoji:			{HAHA} {BOMB} {SKULL} etc.
		
	Extra:
		error_msg():	Prints custom error and exit.
		Macro FT_ERROR:	prints file, function, line and custom message and exit().
		Macro FT_INFO:	prints file, function, line and custom message.


## Libtp
	Thread pool function using pthread.
	Thread function return 0 on error and not 0 on success.


## Libft
	Miscellaneous lib c functions recreated.
	Some notable:
		ft_compile_string	-	Uses the string to compile and executable.
		*ft_dellstnode		-	Delets a node from a t_list and link remaining nodes.
		*ft_fdtostr		-	Read everything from file descriptor to a string.
		*ft_filetostr		-	Read everuthing from file to string.
		get_next_line		-	Read one line at a time.
		ft_lstadd_new		-	Add a new node to a t_list.
		*ft_memalloc		-	Malloc and set memory to 0.
		ft_timer_start		-	Start timing a funcition.
		ft_timer_end		-	End funciotn timing and return elapsed time.