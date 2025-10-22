# Les conventions de commits


Ce document m'aide à comprendre quels sont les bonnes pratiques pour les messages de commits

## utilité 
La spécification de Conventional Commits est une convention légère pour des messages de commite au top. Il fournit un ensemble simple de règles pour créer un historique de commite explicite; Ce qui facilite l’écriture d’outils automatisés. 

## spécification
Les mots clés ”DOIT” (“MUST”), “NE DOIT PAS” (“MUST NOT”), “REQUIS” (“REQUIRED”), “NE DOIT” (“SHALL”), “NE DOIT PAS” (“SHALL NOT”), “NE DEVRAIT” (“SHOULD”), “NE DEVRAIT PAS” (“SHOULD NOT”), “RECOMMANDÉ” (“RECOMMENDED”), “PEUT” (“MAY”), et “FACULTATIF” (“OPTIONAL”) dans ce document doivent être interprétés comme décrit dans RFC 2119.

Les commits DOIT être préfixés par un type, qui consiste en un nom, feat, fix, etc., suivi d’un côlon et d’un espace.
Le type feat DOIT être utilisé lorsqu’un commit ajoute une nouvelle fonctionnalité à votre application. ou bibliothèque.
Le type fix DOIT être utilisé lorsqu’un commit représente un correctif pour votre application.
Un scope facultative PEUT être fournie après un type. Un scope est une phrase décrivant une section du code encadrée par des parenthèses, par exemple, fix (analyseur)):
Une description DOIT suivre immédiatement le préfixe type/scope. La description est une brève description des modifications du code, par exemple, fix: problème d’analyse d’un tableau lorsque plusieurs espaces étaient contenus dans string.
Un texte plus long PEUT être fourni après la description courte, fournissant des informations contextuelles supplémentaires sur les modifications du code. Le texte DOIT commencer par une ligne vide après la description.
Un pied de page PEUT être fourni une ligne vierge après le texte (ou après la description si le texte manque). Le pied de page DEVRAIT contenir des références de problèmes supplémentaires concernant les modifications du code (telles que les problèmes qu’il corrige, par exemple, Fixes #13).
Les changements de rupture DOIVENT être indiqués au tout début du pied de page ou de la section du corps de texte d’un commit. Un changement radical DOIT être dans le texte en majuscule BREAKING CHANGE, suivi de deux points et d’un espace.
Une description DOIT être fournie après le «BREAKING CHANGE:», décrivant la modification de l’API, par exemple, BREAKING CHANGE: les variables d’environnement sont désormais prioritaires sur les fichiers de configuration.
Le pied de page NE DOIT contenir que «BREAKING CHANGE», des liens externes, des références de publication et d’autres méta-informations.
Des types autres que feat et fix PEUVENT être utilisés dans vos messages de commit.