## C
Задача схожа на ті, які мені вже зустрічалися і я їх не розв'язав самостійно. Зрозуміло було, що треба якось лінійно обходити і, в принципі, за O(N) можна розв'язати. Пробував застосувати бінарний пошук, але швидко зрозумів, що це нічого не дасть. Також пробував дерево відрізків, але це б також нічого не дало, так як всі проміжки всеодно за O(N<sup>2</sup>) довелося б перебрати. Отже зупинився на префіксних сумах та лінійному проході. Але довго не розумів що з цим робити. Далі спробував подивитись на кожній і-тій префіксній сумі на її різницю з поточною довжиною послідовності. Побачив властивість, що в деяких випадках відвовідь дорівнює кількості однакових значень різниць мінус один: `ans = sum of (count(abs(i - p[i])) - 1)`. Це працює далеко не для всіх випадків. Доведення не знайшов. В кінці контесту взявся за те, з чого варто було почати: розглядав які значення з кожним наступним `i` можуть набувати такі змінні: довжина префіксу та сума. Підозрюю, що цю задачу можна вирішити одновимірною динамікою.

Наступний день:
Трохи порозглядав приклади, спробував покращити ідею с різницями префіксних сум та довжин підмасиву. Впевнився, що кількість різниць має значення, а саме для кожної різниці `d` ми можемо її додати до відповіді ось таким чином: `count(d) * (count(d) - 1) / 2`. Пройшло найперший тест, на другому помилка. Зрозумів, що час щось робити з `abs(i - p[i])`, так як це не дуже правильно, бо так ми можемо визначити якусь різницю в ту групу, в яку вона не повинна належати. Тому взяв "кільцевий" елемент для всіх від'ємних різниць: `(p[i] - i + m) % m, m = 8 * n + 1`, m - найбільша різниця, яку ми могли б отримати. Здав задачу. Спробував довести, чому ми маємо рахувати ці різниці і із самого початку мій підхід мав виглядати так:
1. Потрібно знайти к-сть таких відрізків, початки і кінці яких дают тут істину: `p[i] - p[j] == i - j, i > j`. Трохи переформулювавши отримуємо: `p[i] - i == p[j] - j`.
