spisok_G = ['vovan', 'igor', 'denis', 'maks', 'pashka-kakashka']
ne_pridet = 'igor'
spisok_G.remove(ne_pridet)
spisok_G.remove('maks') #Дополнительное удаление из списка
spisok_G.insert(1, 'leha') #Замена Игоря, Лехой
novie_uchastniki = ['serega', 'kolyan', 'oleg']
#Добавление новых участников
spisok_G.insert(0, 'serega')
spisok_G.insert(3, 'kolyan')
spisok_G.append('oleg')
#Текст приглашения для участников из списка
priglashenie1 = '\tУважаемый ' + spisok_G[0].title() + '!' + '\nПриглашаю тебя на торжественный праздник.' '\n\nСписок приглашенных: ' + str(spisok_G)
priglashenie2 = '\tУважаемый ' + spisok_G[1].title() + '!' + '\nПриглашаю тебя на торжественный праздник.' '\n\nСписок приглашенных: ' + str(spisok_G)
priglashenie3 = '\tУважаемый ' + spisok_G[2].title() + '!' + '\nПриглашаю тебя на торжественный праздник.' '\n\nСписок приглашенных: ' + str(spisok_G)
priglashenie4 = '\tУважаемый ' + spisok_G[3].title() + '!' + '\nПриглашаю тебя на торжественный праздник.' '\n\nСписок приглашенных: ' + str(spisok_G)

print(priglashenie1)
print('Новые участники ' + str(novie_uchastniki))
print('_____________________________________________')

print(priglashenie2)
print('Новые участники ' + str(novie_uchastniki))
print('_____________________________________________')

print(priglashenie3)
print('Новые участники ' + str(novie_uchastniki))
print('_____________________________________________')

print(priglashenie4)
print('Новые участники ' + str(novie_uchastniki))
print('_____________________________________________')
