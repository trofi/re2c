#include <stdio.h>
bool scan(const char * start, const char * const limit)
{
#	define YYCTYPE unsigned char
#	define YYCURSOR start
Mc:
	/*!re2c
		re2c:yyfill:enable = 0;
				Mc = [\u0903-\u0903\u093b-\u093b\u093e-\u0940\u0949-\u094c\u094e-\u094f\u0982-\u0983\u09be-\u09c0\u09c7-\u09c8\u09cb-\u09cc\u09d7-\u09d7\u0a03-\u0a03\u0a3e-\u0a40\u0a83-\u0a83\u0abe-\u0ac0\u0ac9-\u0ac9\u0acb-\u0acc\u0b02-\u0b03\u0b3e-\u0b3e\u0b40-\u0b40\u0b47-\u0b48\u0b4b-\u0b4c\u0b57-\u0b57\u0bbe-\u0bbf\u0bc1-\u0bc2\u0bc6-\u0bc8\u0bca-\u0bcc\u0bd7-\u0bd7\u0c01-\u0c03\u0c41-\u0c44\u0c82-\u0c83\u0cbe-\u0cbe\u0cc0-\u0cc4\u0cc7-\u0cc8\u0cca-\u0ccb\u0cd5-\u0cd6\u0d02-\u0d03\u0d3e-\u0d40\u0d46-\u0d48\u0d4a-\u0d4c\u0d57-\u0d57\u0d82-\u0d83\u0dcf-\u0dd1\u0dd8-\u0ddf\u0df2-\u0df3\u0f3e-\u0f3f\u0f7f-\u0f7f\u102b-\u102c\u1031-\u1031\u1038-\u1038\u103b-\u103c\u1056-\u1057\u1062-\u1064\u1067-\u106d\u1083-\u1084\u1087-\u108c\u108f-\u108f\u109a-\u109c\u17b6-\u17b6\u17be-\u17c5\u17c7-\u17c8\u1923-\u1926\u1929-\u192b\u1930-\u1931\u1933-\u1938\u19b0-\u19c0\u19c8-\u19c9\u1a19-\u1a1b\u1a55-\u1a55\u1a57-\u1a57\u1a61-\u1a61\u1a63-\u1a64\u1a6d-\u1a72\u1b04-\u1b04\u1b35-\u1b35\u1b3b-\u1b3b\u1b3d-\u1b41\u1b43-\u1b44\u1b82-\u1b82\u1ba1-\u1ba1\u1ba6-\u1ba7\u1baa-\u1baa\u1be7-\u1be7\u1bea-\u1bec\u1bee-\u1bee\u1bf2-\u1bf3\u1c24-\u1c2b\u1c34-\u1c35\u1ce1-\u1ce1\u1cf2-\u1cf2\ua823-\ua824\ua827-\ua827\ua880-\ua881\ua8b4-\ua8c3\ua952-\ua953\ua983-\ua983\ua9b4-\ua9b5\ua9ba-\ua9bb\ua9bd-\ua9c0\uaa2f-\uaa30\uaa33-\uaa34\uaa4d-\uaa4d\uaa7b-\uaa7b\uabe3-\uabe4\uabe6-\uabe7\uabe9-\uabea\uabec-\uabec\U00011000-\U00011000\U00011002-\U00011002\U00011082-\U00011082\U000110b0-\U000110b2\U000110b7-\U000110b8\U0001d165-\U0001d166\U0001d16d-\U0001d172];
		Mc { goto Mc; }
		[^] { return YYCURSOR == limit; }
	*/
}
static const char buffer_Mc [] = "\xE0\xA4\x83\xE0\xA4\xBB\xE0\xA4\xBE\xE0\xA4\xBF\xE0\xA5\x80\xE0\xA5\x89\xE0\xA5\x8A\xE0\xA5\x8B\xE0\xA5\x8C\xE0\xA5\x8E\xE0\xA5\x8F\xE0\xA6\x82\xE0\xA6\x83\xE0\xA6\xBE\xE0\xA6\xBF\xE0\xA7\x80\xE0\xA7\x87\xE0\xA7\x88\xE0\xA7\x8B\xE0\xA7\x8C\xE0\xA7\x97\xE0\xA8\x83\xE0\xA8\xBE\xE0\xA8\xBF\xE0\xA9\x80\xE0\xAA\x83\xE0\xAA\xBE\xE0\xAA\xBF\xE0\xAB\x80\xE0\xAB\x89\xE0\xAB\x8B\xE0\xAB\x8C\xE0\xAC\x82\xE0\xAC\x83\xE0\xAC\xBE\xE0\xAD\x80\xE0\xAD\x87\xE0\xAD\x88\xE0\xAD\x8B\xE0\xAD\x8C\xE0\xAD\x97\xE0\xAE\xBE\xE0\xAE\xBF\xE0\xAF\x81\xE0\xAF\x82\xE0\xAF\x86\xE0\xAF\x87\xE0\xAF\x88\xE0\xAF\x8A\xE0\xAF\x8B\xE0\xAF\x8C\xE0\xAF\x97\xE0\xB0\x81\xE0\xB0\x82\xE0\xB0\x83\xE0\xB1\x81\xE0\xB1\x82\xE0\xB1\x83\xE0\xB1\x84\xE0\xB2\x82\xE0\xB2\x83\xE0\xB2\xBE\xE0\xB3\x80\xE0\xB3\x81\xE0\xB3\x82\xE0\xB3\x83\xE0\xB3\x84\xE0\xB3\x87\xE0\xB3\x88\xE0\xB3\x8A\xE0\xB3\x8B\xE0\xB3\x95\xE0\xB3\x96\xE0\xB4\x82\xE0\xB4\x83\xE0\xB4\xBE\xE0\xB4\xBF\xE0\xB5\x80\xE0\xB5\x86\xE0\xB5\x87\xE0\xB5\x88\xE0\xB5\x8A\xE0\xB5\x8B\xE0\xB5\x8C\xE0\xB5\x97\xE0\xB6\x82\xE0\xB6\x83\xE0\xB7\x8F\xE0\xB7\x90\xE0\xB7\x91\xE0\xB7\x98\xE0\xB7\x99\xE0\xB7\x9A\xE0\xB7\x9B\xE0\xB7\x9C\xE0\xB7\x9D\xE0\xB7\x9E\xE0\xB7\x9F\xE0\xB7\xB2\xE0\xB7\xB3\xE0\xBC\xBE\xE0\xBC\xBF\xE0\xBD\xBF\xE1\x80\xAB\xE1\x80\xAC\xE1\x80\xB1\xE1\x80\xB8\xE1\x80\xBB\xE1\x80\xBC\xE1\x81\x96\xE1\x81\x97\xE1\x81\xA2\xE1\x81\xA3\xE1\x81\xA4\xE1\x81\xA7\xE1\x81\xA8\xE1\x81\xA9\xE1\x81\xAA\xE1\x81\xAB\xE1\x81\xAC\xE1\x81\xAD\xE1\x82\x83\xE1\x82\x84\xE1\x82\x87\xE1\x82\x88\xE1\x82\x89\xE1\x82\x8A\xE1\x82\x8B\xE1\x82\x8C\xE1\x82\x8F\xE1\x82\x9A\xE1\x82\x9B\xE1\x82\x9C\xE1\x9E\xB6\xE1\x9E\xBE\xE1\x9E\xBF\xE1\x9F\x80\xE1\x9F\x81\xE1\x9F\x82\xE1\x9F\x83\xE1\x9F\x84\xE1\x9F\x85\xE1\x9F\x87\xE1\x9F\x88\xE1\xA4\xA3\xE1\xA4\xA4\xE1\xA4\xA5\xE1\xA4\xA6\xE1\xA4\xA9\xE1\xA4\xAA\xE1\xA4\xAB\xE1\xA4\xB0\xE1\xA4\xB1\xE1\xA4\xB3\xE1\xA4\xB4\xE1\xA4\xB5\xE1\xA4\xB6\xE1\xA4\xB7\xE1\xA4\xB8\xE1\xA6\xB0\xE1\xA6\xB1\xE1\xA6\xB2\xE1\xA6\xB3\xE1\xA6\xB4\xE1\xA6\xB5\xE1\xA6\xB6\xE1\xA6\xB7\xE1\xA6\xB8\xE1\xA6\xB9\xE1\xA6\xBA\xE1\xA6\xBB\xE1\xA6\xBC\xE1\xA6\xBD\xE1\xA6\xBE\xE1\xA6\xBF\xE1\xA7\x80\xE1\xA7\x88\xE1\xA7\x89\xE1\xA8\x99\xE1\xA8\x9A\xE1\xA8\x9B\xE1\xA9\x95\xE1\xA9\x97\xE1\xA9\xA1\xE1\xA9\xA3\xE1\xA9\xA4\xE1\xA9\xAD\xE1\xA9\xAE\xE1\xA9\xAF\xE1\xA9\xB0\xE1\xA9\xB1\xE1\xA9\xB2\xE1\xAC\x84\xE1\xAC\xB5\xE1\xAC\xBB\xE1\xAC\xBD\xE1\xAC\xBE\xE1\xAC\xBF\xE1\xAD\x80\xE1\xAD\x81\xE1\xAD\x83\xE1\xAD\x84\xE1\xAE\x82\xE1\xAE\xA1\xE1\xAE\xA6\xE1\xAE\xA7\xE1\xAE\xAA\xE1\xAF\xA7\xE1\xAF\xAA\xE1\xAF\xAB\xE1\xAF\xAC\xE1\xAF\xAE\xE1\xAF\xB2\xE1\xAF\xB3\xE1\xB0\xA4\xE1\xB0\xA5\xE1\xB0\xA6\xE1\xB0\xA7\xE1\xB0\xA8\xE1\xB0\xA9\xE1\xB0\xAA\xE1\xB0\xAB\xE1\xB0\xB4\xE1\xB0\xB5\xE1\xB3\xA1\xE1\xB3\xB2\xEA\xA0\xA3\xEA\xA0\xA4\xEA\xA0\xA7\xEA\xA2\x80\xEA\xA2\x81\xEA\xA2\xB4\xEA\xA2\xB5\xEA\xA2\xB6\xEA\xA2\xB7\xEA\xA2\xB8\xEA\xA2\xB9\xEA\xA2\xBA\xEA\xA2\xBB\xEA\xA2\xBC\xEA\xA2\xBD\xEA\xA2\xBE\xEA\xA2\xBF\xEA\xA3\x80\xEA\xA3\x81\xEA\xA3\x82\xEA\xA3\x83\xEA\xA5\x92\xEA\xA5\x93\xEA\xA6\x83\xEA\xA6\xB4\xEA\xA6\xB5\xEA\xA6\xBA\xEA\xA6\xBB\xEA\xA6\xBD\xEA\xA6\xBE\xEA\xA6\xBF\xEA\xA7\x80\xEA\xA8\xAF\xEA\xA8\xB0\xEA\xA8\xB3\xEA\xA8\xB4\xEA\xA9\x8D\xEA\xA9\xBB\xEA\xAF\xA3\xEA\xAF\xA4\xEA\xAF\xA6\xEA\xAF\xA7\xEA\xAF\xA9\xEA\xAF\xAA\xEA\xAF\xAC\xF0\x91\x80\x80\xF0\x91\x80\x82\xF0\x91\x82\x82\xF0\x91\x82\xB0\xF0\x91\x82\xB1\xF0\x91\x82\xB2\xF0\x91\x82\xB7\xF0\x91\x82\xB8\xF0\x9D\x85\xA5\xF0\x9D\x85\xA6\xF0\x9D\x85\xAD\xF0\x9D\x85\xAE\xF0\x9D\x85\xAF\xF0\x9D\x85\xB0\xF0\x9D\x85\xB1\xF0\x9D\x85\xB2\x00";
int main ()
{
	if (!scan (buffer_Mc, buffer_Mc + sizeof (buffer_Mc) - 1))
		printf("test 'Mc' failed\n");
}