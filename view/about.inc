{# This is the template for the about page. You can enter any html here and show different language versions by using the lang value in a twig conditional as demonstrated below. #}

{% if request.lang == 'fi' %}
<h4>Tietoja sanastoselaimesta</h4>
<p>Skosmos on web-pohjainen sanasto ja ontologiaselain.</p>
<a href="http://github.com/NatLibFi/Skosmos">Skosmos GitHub-repositorio</a>

{% elseif request.lang == 'sv' %}
<h4>Information</h4>
<p>Skosmos är en ontologibrowser.</p>
<a href="http://github.com/NatLibFi/Skosmos">Skosmos på GitHub</a>

{% elseif request.lang == 'en' %}
<h4>About</h4>
<p>Skosmos is a web based open source ontology browser.</p>
<a href="http://github.com/NatLibFi/Skosmos">Skosmos GitHub -repository</a>

{% elseif request.lang == 'nl' %}
<h4>Over</h4>
<p>Skosmos is een webgebaseerde open source ontologie browser.</p>
<a href="http://github.com/NatLibFi/Skosmos">Skosmos GitHub -repository</a>

{% endif %}
