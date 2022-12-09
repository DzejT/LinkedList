void parse_user_input(char *name, char *surname, char *email, char *number);
void parse_keyword(char *keyword);
void parse_index(int *index);
int get_user_option();
void add_new_address(struct node **list);
void add_address_at_index(struct node **list);
void find_at_position(struct node *list);
void find_by_keyword(struct node *list);
void delete_at_position(struct node **list);
void printHelp();
void populateList(struct node **head);