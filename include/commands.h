/*
 * commands.h: header for commands.c
 *
 * Copyright 1990 Michael Sandrof
 * Copyright 1994 Matthew Green
 * Copyright 1997 EPIC Software Labs
 * See the COPYRIGHT file, or do a HELP IRCII COPYRIGHT 
 */

#ifndef __commands_h__
#define __commands_h__

extern	int	will_catch_break_exceptions;
extern	int	will_catch_continue_exceptions;
extern	int	will_catch_return_exceptions;
extern	int	break_exception;
extern	int	continue_exception;
extern	int	return_exception;
extern	int	system_exception;

extern	int	need_defered_commands;

	void	parse_line 		(const char *, const char *, const char *, int, int);
	BUILT_IN_COMMAND(load);
	void	send_text	 	(const char *, const char *, const char *, int);
	int	redirect_text		(int, const char *, const char *, char *, int);
	int	command_exist		(char *);
	BUILT_IN_COMMAND(e_channel);
	void	do_defered_commands	(void);
	char	*get_command		(const char *);

        void    dump_load_stack         (int);
const   char *  current_filename        (void);
const   char *  current_loader          (void);
        int     current_line            (void);
const   char *  current_package         (void);

#endif /* __commands_h__ */
