# 

The spoonacular Nutrition, Recipe, and Food API allows you to access over 380,000 recipes, thousands of ingredients, 800,000 food products, and 100,000 menu items. Our food ontology and semantic recipe search engine makes it possible to search for recipes using natural language queries, such as \"gluten free brownies without sugar\" or \"low fat vegan cupcakes.\" You can automatically calculate the nutritional information for any recipe, analyze recipe costs, visualize ingredient lists, find recipes for what's in your fridge, find recipes based on special diets, nutritional requirements, or favorite ingredients, classify recipes into types and cuisines, convert ingredient amounts, or even compute an entire meal plan. With our powerful API, you can create many kinds of food and especially nutrition apps.

Special diets/dietary requirements currently available include: vegan, vegetarian, pescetarian, gluten free, grain free, dairy free, high protein, whole 30, low sodium, low carb, Paleo, ketogenic, FODMAP, and Primal.

This Groovy package, using the [http-builder-ng library](https://http-builder-ng.github.io/http-builder-ng/), is automatically generated by the [OpenAPI Generator](https://openapi-generator.tech) project:

- API version: 1.1
- Package version: 1.1
- Build date: 2022-09-09T18:26:50.811+02:00[Europe/Berlin]
- Build package: org.openapitools.codegen.languages.GroovyClientCodegen
For more information, please visit [https://spoonacular.com/contact](https://spoonacular.com/contact)

## Requirements

* Groovy 2.5.7
* Gradle 4.9

## Build

First, create the gradle wrapper script:

```
gradle wrapper
```

Then, run:

```
./gradlew check assemble
```

## Getting Started


```groovy
def apiInstance = new IngredientsApi()
def query = "burger" // String | The (natural language) search query.
def number = 10 // Integer | The maximum number of items to return (between 1 and 100). Defaults to 10.
def metaInformation = false // Boolean | Whether to return more meta information about the ingredients.
def intolerances = "egg" // String | A comma-separated list of intolerances. All recipes returned must not contain ingredients that are not suitable for people with the intolerances entered. See a full list of supported intolerances.

apiInstance.autocompleteIngredientSearch(query, number, metaInformation, intolerances)
    {
    // on success
    def result = (Set&lt;AutocompleteIngredientSearch200ResponseInner&gt;)it
    println result
    
}
    {
    // on failure
    statusCode, message ->
        println "${statusCode} ${message}"
};
```

