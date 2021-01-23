##
## EPITECH PROJECT, 2020
## makefileds
## File description:
## dcd
##

NAME	=	my_radar

SRC		=	src/main.c 			    				\
			src/draw/draw_plane.c 					\
			src/draw/draw_tower.c 					\
			src/file/file_reader.c 					\
			src/file/file_array.c 					\
			src/file/deterline.c 					\
			src/file/print_array.c					\
			src/file/init_array.c 					\
			src/file/init_buff.c 					\
			src/file/security/file_checker.c 		\
			src/file/security/file_manager.c 		\
			src/file/security/usage.c 				\
			src/file/security/src_checker.c 		\
			src/fill/fill_tower_array.c 			\
			src/fill/fill_plane_array.c 			\
			src/get/get_speed.c 					\
			src/get/get_angle.c 					\
			src/get/count_type.c 					\
			src/free/free_buff.c 					\
			src/free/free_plan.c 					\
			src/free/free_array.c 					\
			src/game/game_loop.c 					\
			src/game/prepare_map.c 					\


LIB		=	/lib/

MYH		=	my.h

CFLAGS	+=	-I.$(MY)

MY	=	/include/

CC	=	gcc

FFLAGS 	=	-l csfml-graphics -l csfml-system -l csfml-audio -l csfml-window -lm -g3

all	:	$(OBJ)
		make -C lib/ all
		$(CC) -o $(NAME) $(SRC) $(CFLAGS) $(FFLAGS) -L.$(LIB) -lmy

clean	:
		rm -f $(OBJ)
		make -C lib/ clean

fclean	:	clean
		rm -f $(NAME)
		make -C lib/ fclean


re	:	fclean all
		make -C lib/ re
