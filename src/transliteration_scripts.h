
#ifndef TRANSLITERATION_SCRIPTS_H
#define TRANSLITERATION_SCRIPTS_H

#include <stdlib.h>
#include "unicode_scripts.h"
#include "transliterate.h"

typedef struct script_transliteration_rule {
    script_type_t script;
    char *language;
    uint32_t index;
    uint32_t len;
} script_transliteration_rule_t;

script_transliteration_rule_t script_transliteration_rules[] = {
    {SCRIPT_THAANA, NULL, 0, 2},
    {SCRIPT_GURMUKHI, NULL, 2, 1},
    {SCRIPT_TELUGU, NULL, 3, 1},
    {SCRIPT_CYRILLIC, "be", 4, 1},
    {SCRIPT_CYRILLIC, "bg", 5, 1},
    {SCRIPT_CYRILLIC, NULL, 6, 1},
    {SCRIPT_CYRILLIC, "ru", 7, 1},
    {SCRIPT_CYRILLIC, "uz", 8, 1},
    {SCRIPT_CYRILLIC, "kk", 9, 1},
    {SCRIPT_CYRILLIC, "sr", 10, 1},
    {SCRIPT_CYRILLIC, "mn", 11, 1},
    {SCRIPT_CYRILLIC, "mk", 12, 1},
    {SCRIPT_CYRILLIC, "uk", 13, 1},
    {SCRIPT_CYRILLIC, "ky", 14, 1},
    {SCRIPT_ORIYA, NULL, 15, 1},
    {SCRIPT_HANGUL, NULL, 16, 2},
    {SCRIPT_GUJARATI, NULL, 18, 1},
    {SCRIPT_HAN, NULL, 19, 1},
    {SCRIPT_ARMENIAN, NULL, 20, 1},
    {SCRIPT_TAMIL, NULL, 21, 1},
    {SCRIPT_BENGALI, NULL, 22, 1},
    {SCRIPT_MALAYALAM, NULL, 23, 1},
    {SCRIPT_HIRAGANA, NULL, 24, 1},
    {SCRIPT_KANNADA, NULL, 25, 1},
    {SCRIPT_LATIN, NULL, 26, 1},
    {SCRIPT_GEORGIAN, NULL, 27, 2},
    {SCRIPT_DEVANAGARI, NULL, 29, 1},
    {SCRIPT_THAI, NULL, 30, 1},
    {SCRIPT_GREEK, NULL, 31, 3},
    {SCRIPT_CANADIAN_ABORIGINAL, NULL, 34, 1},
    {SCRIPT_ARABIC, "fa", 35, 1},
    {SCRIPT_ARABIC, NULL, 36, 2},
    {SCRIPT_ARABIC, "ps", 38, 1},
    {SCRIPT_HEBREW, NULL, 39, 2},
    {SCRIPT_KATAKANA, NULL, 41, 2},
    {SCRIPT_COMMON, NULL, 43, 1}
};

char *script_transliterators[] = {
    "thaana-latin",
    "maldivian-latin-bgn",
    "gurmukhi-latin",
    "telugu-latin",
    "belarusian-latin-bgn",
    "bulgarian-latin-bgn",
    "cyrillic-latin",
    "russian-latin-bgn",
    "uzbek-latin-bgn",
    "kazakh-latin-bgn",
    "serbian-latin-bgn",
    "mongolian-latin-bgn",
    "macedonian-latin-bgn",
    "ukrainian-latin-bgn",
    "kirghiz-latin-bgn",
    "oriya-latin",
    "hangul-latin",
    "korean-latin-bgn",
    "gujarati-latin",
    "han-latin",
    "armenian-latin-bgn",
    "tamil-latin",
    "bengali-latin",
    "malayam-latin",
    "hiragana-latin",
    "kannada-latin",
    "latin-ascii",
    "georgian-latin",
    "georgian-latin-bgn",
    "devanagari-latin",
    "thai-latin",
    "greek-latin",
    "greek-latin-bgn",
    "greek-latin-ungegn",
    "canadianaboriginal-latin",
    "persian-latin-bgn",
    "arabic-latin",
    "arabic-latin-bgn",
    "pashto-latin-bgn",
    "hebrew-latin",
    "hebrew-latin-bgn",
    "katakana-latin",
    "katakana-latin-bgn",
    "latin-ascii"
}

#endif
