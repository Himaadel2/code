// regular expressions
/**
 * modifiers => flags
 * i => case-insensitive
 * g => global
 * m => multilines
 *
 * syntax other
 * /pattern/modifiers
 * new RegExp("pattern","modifiers")
 *
 * Ranges (one character)
 * (x|y) => x or y
 * [0-9] => 0 to 9
 * [^0-9] => any character not 0 to 9
 * [a-z] => a to z
 * [A-Z] => A to Z
 * [^a-z] => any character not a to z
 * [abc] => a or b or c
 * [^abc] => not a or b or c
 * [a-z|0-9] || [a-z0-9] => 0 to 9 or a to z 
 * 
 * Quantifiers
 * Ranges+ => one or more
 * Ranges* => zero or more
 * Ranges? => zero or one
 * Ranges{x} => number of x
 * Ranges{x,y} => range between x,y 
 * Ranges{x,} => at least x
 * $ => end with something
 * ^ => start with something
 * ?= => followed by something
 * ?! => not followed by something
 * \> =>
 * \< =>
 * 
 * character class
 * . => any character except newline or other line terminators (\n \r ;)
 * \w => [a-z] || [A-Z] || [0-9] || _
 * \W => ^\w
 * \d => [0-9]
 * \D => ^\d
 * \s => whitespace ( )
 * \S => ^\s
 * \b => beginning or end of word
 * \B => ^\b
 * 
 * pattern.test(input)
 * return true 
 * return false 
 * 
 * print Symbols
 * \-
 * / \ $ . [ ] ( ) ^ * + ?
 * 
 */
let s = `Hello hima , ahmed , Hima , HI, Hima,
js , html ,c++,java,css,abc`;
let regex = /Hima/;
console.log(s.match(regex));
regex = /Hima/i;
console.log(s.match(regex));
regex = /Hima/g;
console.log(s.match(regex));
regex = /Hima/gi;
console.log(s.match(regex));
regex = /css/m;
console.log(s.match(regex));
regex = /Himas/;
console.log(s.match(regex)); //null
regex = /[abchH]/;
console.log(s.match(regex));
regex = /[abcH]/ig;
console.log(s.match(regex));

let eld = "Com Net Org Info Code Io";
regex = /(code|org|io)/i;
console.log(eld.match(regex));
regex = /(code|org|io)/gi;
console.log(eld.match(regex));

let num = "12345678910";
regex = /[0-9]/;
console.log(num.match(regex));
regex = /[0-4]/g;
console.log(num.match(regex));
regex = /[^0-4]/g;
console.log(num.match(regex));

num = "1$2!3@5$$6&9^**10afafaFDSFDSDS";
regex = /[^0-9]/g;
console.log(num.match(regex));
regex = /[^a-z^A-Z0-9]/g;
console.log(num.match(regex));
regex = /[^a-zA-Z0-9]/g;
console.log(num.match(regex));

s = "js1 js2 js5js js5555js j54546"
regex=/js[0-9]js/g
console.log(s.match(regex));
regex=/js[0-9]+js/g
console.log(s.match(regex));
regex=/[a-z|0-9]+/g
console.log(s.match(regex));
regex=/[a-z0-9]+/g
console.log(s.match(regex));

let email ="o@@@.....com o@g.com  o@g.net h@i.com o@s.org 5@5.com"
regex=/./g
console.log(email.match(regex));
regex=/\w/g
console.log(email.match(regex));
regex=/\w@\w.(com|net)/g
console.log(email.match(regex));
regex=/\s+/g
console.log(email.match(regex));
regex=/@/
console.log(email.replace(regex,"js"));
regex=/@/g
console.log(email.replaceAll(regex,"js"));
regex=/@/g
console.log(email.replace(regex,"js"));

s= "spanu1 span1j span1h span15 afaf hima ahmed 6span 55spangkgk"
regex=/\bspan/g
console.log(s.match(regex));
regex=/span\b/g
console.log(s.match(regex));
regex=/\bspan|span\b/g
console.log(s.match(regex));
console.log(regex.test(s));
s="iinhihi"
console.log(regex.test(s));

num ="0110 010 150 05120 0560 350 00 05456460"
regex=/0\d*0/g
console.log(num.match(regex));
regex=/0\d+0/g
console.log(num.match(regex));
regex=/0\d?0/g
console.log(num.match(regex));
regex=/0\d{2}0/g
console.log(num.match(regex));
regex=/0\d{2,5}0/g
console.log(num.match(regex));
regex=/0\d{4,}0/g
console.log(num.match(regex));
regex=/0\d{,4}0/g
console.log(num.match(regex));//null

let web="https://google.com  http://www.55hk.com hi.com "
regex=/(https?:\/\/)?(www.)?\w+.\w+/g
console.log(web.match(regex));

s="10ethijkhkhnet kkklk"
regex=/net$/g
console.log(regex.test(s));
regex=/^\d/g
console.log(regex.test(s));

s="5hkhs 1h-kkhkhs 4khi/khis 4khl|l4lg 4khl\\l4ls"
regex=/\d\w+(?=s)/g
console.log(s.match(regex));
regex=/\d\w{6}(?!s)/g
console.log(s.match(regex));
regex=/[|]/g
console.log(regex.test(s));
regex=/[-]/g
console.log(regex.test(s));

var a = '20';
var b = a = 30;
document.write(a + b);


