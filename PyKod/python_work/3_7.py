spisok_G = ['серёга', 'вовка', 'лёха', 'колян', 'денис', 'пашка-какашка', 'олег']
print('\t\t\tВнимание! \nВ связи с тем, что не удалось разыскать большой стол, \nна обед приглашаются только два гостя из списка.')
print('\nГости которым не повезло:')
pop1 = spisok_G.pop(6)
print('\tСожалею ' + pop1.title() + ', но для тебя нет места.')
pop2 = spisok_G.pop(5)
print('\tСожалею ' + pop2.title() + ', но для тебя нет места.')
pop3 = spisok_G.pop(4)
print('\tСожалею ' + pop3.title() + ', но для тебя нет места.')
pop4 = spisok_G.pop(3)
print('\tСожалею ' + pop4.title() + ', но для тебя нет места.')
pop5 = spisok_G.pop(2)
print('\tСожалею ' + pop5.title() + ', но для тебя нет места.')
print('\nУважаемый ' + spisok_G[0].title() + '! \nПриглашение остается в силе, ждем вашего присутствия.')
print('\nУважаемый ' + spisok_G[1].title() + '! \nПриглашение остается в силе, ждем вашего присутствия.')
del spisok_G[1]
del spisok_G[0]
if len(spisok_G) <= 0:
    print('\n\tВсе гости собрались, больше ждать не кого. Прошу к столу!')
#print(spisok_G)

