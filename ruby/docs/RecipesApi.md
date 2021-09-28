# OpenapiClient::RecipesApi

All URIs are relative to *https://api.spoonacular.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**analyze_a_recipe_search_query**](RecipesApi.md#analyze_a_recipe_search_query) | **GET** /recipes/queries/analyze | Analyze a Recipe Search Query
[**analyze_recipe_instructions**](RecipesApi.md#analyze_recipe_instructions) | **POST** /recipes/analyzeInstructions | Analyze Recipe Instructions
[**autocomplete_recipe_search**](RecipesApi.md#autocomplete_recipe_search) | **GET** /recipes/autocomplete | Autocomplete Recipe Search
[**classify_cuisine**](RecipesApi.md#classify_cuisine) | **POST** /recipes/cuisine | Classify Cuisine
[**compute_glycemic_load**](RecipesApi.md#compute_glycemic_load) | **POST** /food/ingredients/glycemicLoad | Compute Glycemic Load
[**convert_amounts**](RecipesApi.md#convert_amounts) | **GET** /recipes/convert | Convert Amounts
[**create_recipe_card**](RecipesApi.md#create_recipe_card) | **POST** /recipes/visualizeRecipe | Create Recipe Card
[**equipment_by_id_image**](RecipesApi.md#equipment_by_id_image) | **GET** /recipes/{id}/equipmentWidget.png | Equipment by ID Image
[**extract_recipe_from_website**](RecipesApi.md#extract_recipe_from_website) | **GET** /recipes/extract | Extract Recipe from Website
[**get_analyzed_recipe_instructions**](RecipesApi.md#get_analyzed_recipe_instructions) | **GET** /recipes/{id}/analyzedInstructions | Get Analyzed Recipe Instructions
[**get_random_recipes**](RecipesApi.md#get_random_recipes) | **GET** /recipes/random | Get Random Recipes
[**get_recipe_equipment_by_id**](RecipesApi.md#get_recipe_equipment_by_id) | **GET** /recipes/{id}/equipmentWidget.json | Equipment by ID
[**get_recipe_information**](RecipesApi.md#get_recipe_information) | **GET** /recipes/{id}/information | Get Recipe Information
[**get_recipe_information_bulk**](RecipesApi.md#get_recipe_information_bulk) | **GET** /recipes/informationBulk | Get Recipe Information Bulk
[**get_recipe_ingredients_by_id**](RecipesApi.md#get_recipe_ingredients_by_id) | **GET** /recipes/{id}/ingredientWidget.json | Ingredients by ID
[**get_recipe_nutrition_widget_by_id**](RecipesApi.md#get_recipe_nutrition_widget_by_id) | **GET** /recipes/{id}/nutritionWidget.json | Nutrition by ID
[**get_recipe_price_breakdown_by_id**](RecipesApi.md#get_recipe_price_breakdown_by_id) | **GET** /recipes/{id}/priceBreakdownWidget.json | Price Breakdown by ID
[**get_recipe_taste_by_id**](RecipesApi.md#get_recipe_taste_by_id) | **GET** /recipes/{id}/tasteWidget.json | Taste by ID
[**get_similar_recipes**](RecipesApi.md#get_similar_recipes) | **GET** /recipes/{id}/similar | Get Similar Recipes
[**guess_nutrition_by_dish_name**](RecipesApi.md#guess_nutrition_by_dish_name) | **GET** /recipes/guessNutrition | Guess Nutrition by Dish Name
[**ingredients_by_id_image**](RecipesApi.md#ingredients_by_id_image) | **GET** /recipes/{id}/ingredientWidget.png | Ingredients by ID Image
[**parse_ingredients**](RecipesApi.md#parse_ingredients) | **POST** /recipes/parseIngredients | Parse Ingredients
[**price_breakdown_by_id_image**](RecipesApi.md#price_breakdown_by_id_image) | **GET** /recipes/{id}/priceBreakdownWidget.png | Price Breakdown by ID Image
[**quick_answer**](RecipesApi.md#quick_answer) | **GET** /recipes/quickAnswer | Quick Answer
[**recipe_nutrition_by_id_image**](RecipesApi.md#recipe_nutrition_by_id_image) | **GET** /recipes/{id}/nutritionWidget.png | Recipe Nutrition by ID Image
[**recipe_nutrition_label_image**](RecipesApi.md#recipe_nutrition_label_image) | **GET** /recipes/{id}/nutritionLabel.png | Recipe Nutrition Label Image
[**recipe_nutrition_label_widget**](RecipesApi.md#recipe_nutrition_label_widget) | **GET** /recipes/{id}/nutritionLabel | Recipe Nutrition Label Widget
[**recipe_taste_by_id_image**](RecipesApi.md#recipe_taste_by_id_image) | **GET** /recipes/{id}/tasteWidget.png | Recipe Taste by ID Image
[**search_recipes**](RecipesApi.md#search_recipes) | **GET** /recipes/complexSearch | Search Recipes
[**search_recipes_by_ingredients**](RecipesApi.md#search_recipes_by_ingredients) | **GET** /recipes/findByIngredients | Search Recipes by Ingredients
[**search_recipes_by_nutrients**](RecipesApi.md#search_recipes_by_nutrients) | **GET** /recipes/findByNutrients | Search Recipes by Nutrients
[**summarize_recipe**](RecipesApi.md#summarize_recipe) | **GET** /recipes/{id}/summary | Summarize Recipe
[**visualize_equipment**](RecipesApi.md#visualize_equipment) | **POST** /recipes/visualizeEquipment | Equipment Widget
[**visualize_price_breakdown**](RecipesApi.md#visualize_price_breakdown) | **POST** /recipes/visualizePriceEstimator | Price Breakdown Widget
[**visualize_recipe_equipment_by_id**](RecipesApi.md#visualize_recipe_equipment_by_id) | **GET** /recipes/{id}/equipmentWidget | Equipment by ID Widget
[**visualize_recipe_ingredients_by_id**](RecipesApi.md#visualize_recipe_ingredients_by_id) | **GET** /recipes/{id}/ingredientWidget | Ingredients by ID Widget
[**visualize_recipe_nutrition**](RecipesApi.md#visualize_recipe_nutrition) | **POST** /recipes/visualizeNutrition | Recipe Nutrition Widget
[**visualize_recipe_nutrition_by_id**](RecipesApi.md#visualize_recipe_nutrition_by_id) | **GET** /recipes/{id}/nutritionWidget | Recipe Nutrition by ID Widget
[**visualize_recipe_price_breakdown_by_id**](RecipesApi.md#visualize_recipe_price_breakdown_by_id) | **GET** /recipes/{id}/priceBreakdownWidget | Price Breakdown by ID Widget
[**visualize_recipe_taste**](RecipesApi.md#visualize_recipe_taste) | **POST** /recipes/visualizeTaste | Recipe Taste Widget
[**visualize_recipe_taste_by_id**](RecipesApi.md#visualize_recipe_taste_by_id) | **GET** /recipes/{id}/tasteWidget | Recipe Taste by ID Widget



## analyze_a_recipe_search_query

> InlineResponse20018 analyze_a_recipe_search_query(q)

Analyze a Recipe Search Query

Parse a recipe search query to find out its intention.

### Example

```ruby
# load the gem
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure API key authorization: apiKeyScheme
  config.api_key['apiKey'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['apiKey'] = 'Bearer'
end

api_instance = OpenapiClient::RecipesApi.new
q = 'salmon with fusilli and no nuts' # String | The recipe search query.

begin
  #Analyze a Recipe Search Query
  result = api_instance.analyze_a_recipe_search_query(q)
  p result
rescue OpenapiClient::ApiError => e
  puts "Exception when calling RecipesApi->analyze_a_recipe_search_query: #{e}"
end
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **q** | **String**| The recipe search query. | 

### Return type

[**InlineResponse20018**](InlineResponse20018.md)

### Authorization

[apiKeyScheme](../README.md#apiKeyScheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## analyze_recipe_instructions

> InlineResponse20016 analyze_recipe_instructions(opts)

Analyze Recipe Instructions

This endpoint allows you to break down instructions into atomic steps. Furthermore, each step will contain the ingredients and equipment required. Additionally, all ingredients and equipment from the recipe's instructions will be extracted independently of the step they're used in.

### Example

```ruby
# load the gem
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure API key authorization: apiKeyScheme
  config.api_key['apiKey'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['apiKey'] = 'Bearer'
end

api_instance = OpenapiClient::RecipesApi.new
opts = {
  content_type: 'application/json' # String | The content type.
}

begin
  #Analyze Recipe Instructions
  result = api_instance.analyze_recipe_instructions(opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Exception when calling RecipesApi->analyze_recipe_instructions: #{e}"
end
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **content_type** | **String**| The content type. | [optional] 

### Return type

[**InlineResponse20016**](InlineResponse20016.md)

### Authorization

[apiKeyScheme](../README.md#apiKeyScheme)

### HTTP request headers

- **Content-Type**: application/x-www-form-urlencoded
- **Accept**: application/json


## autocomplete_recipe_search

> Array&lt;InlineResponse2007&gt; autocomplete_recipe_search(opts)

Autocomplete Recipe Search

Autocomplete a partial input to suggest possible recipe names.

### Example

```ruby
# load the gem
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure API key authorization: apiKeyScheme
  config.api_key['apiKey'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['apiKey'] = 'Bearer'
end

api_instance = OpenapiClient::RecipesApi.new
opts = {
  query: 'burger', # String | The (natural language) search query.
  number: 10 # Integer | The maximum number of items to return (between 1 and 100). Defaults to 10.
}

begin
  #Autocomplete Recipe Search
  result = api_instance.autocomplete_recipe_search(opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Exception when calling RecipesApi->autocomplete_recipe_search: #{e}"
end
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **query** | **String**| The (natural language) search query. | [optional] 
 **number** | **Integer**| The maximum number of items to return (between 1 and 100). Defaults to 10. | [optional] [default to 10]

### Return type

[**Array&lt;InlineResponse2007&gt;**](InlineResponse2007.md)

### Authorization

[apiKeyScheme](../README.md#apiKeyScheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## classify_cuisine

> InlineResponse20017 classify_cuisine(opts)

Classify Cuisine

Classify the recipe's cuisine.

### Example

```ruby
# load the gem
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure API key authorization: apiKeyScheme
  config.api_key['apiKey'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['apiKey'] = 'Bearer'
end

api_instance = OpenapiClient::RecipesApi.new
opts = {
  content_type: 'application/json' # String | The content type.
}

begin
  #Classify Cuisine
  result = api_instance.classify_cuisine(opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Exception when calling RecipesApi->classify_cuisine: #{e}"
end
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **content_type** | **String**| The content type. | [optional] 

### Return type

[**InlineResponse20017**](InlineResponse20017.md)

### Authorization

[apiKeyScheme](../README.md#apiKeyScheme)

### HTTP request headers

- **Content-Type**: application/x-www-form-urlencoded
- **Accept**: application/json


## compute_glycemic_load

> InlineResponse20023 compute_glycemic_load(inline_object, opts)

Compute Glycemic Load

Retrieve the glycemic index for a list of ingredients and compute the individual and total glycemic load.

### Example

```ruby
# load the gem
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure API key authorization: apiKeyScheme
  config.api_key['apiKey'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['apiKey'] = 'Bearer'
end

api_instance = OpenapiClient::RecipesApi.new
inline_object = OpenapiClient::InlineObject.new # InlineObject | 
opts = {
  language: 'en' # String | The language of the input. Either 'en' or 'de'.
}

begin
  #Compute Glycemic Load
  result = api_instance.compute_glycemic_load(inline_object, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Exception when calling RecipesApi->compute_glycemic_load: #{e}"
end
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **inline_object** | [**InlineObject**](InlineObject.md)|  | 
 **language** | **String**| The language of the input. Either &#39;en&#39; or &#39;de&#39;. | [optional] 

### Return type

[**InlineResponse20023**](InlineResponse20023.md)

### Authorization

[apiKeyScheme](../README.md#apiKeyScheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## convert_amounts

> InlineResponse20019 convert_amounts(ingredient_name, source_amount, source_unit, target_unit)

Convert Amounts

Convert amounts like \"2 cups of flour to grams\".

### Example

```ruby
# load the gem
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure API key authorization: apiKeyScheme
  config.api_key['apiKey'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['apiKey'] = 'Bearer'
end

api_instance = OpenapiClient::RecipesApi.new
ingredient_name = 'flour' # String | The ingredient which you want to convert.
source_amount = 2.5 # Float | The amount from which you want to convert, e.g. the 2.5 in \"2.5 cups of flour to grams\".
source_unit = 'cups' # String | The unit from which you want to convert, e.g. the grams in \"2.5 cups of flour to grams\". You can also use \"piece\", e.g. \"3.4 oz tomatoes to piece\"
target_unit = 'grams' # String | The unit to which you want to convert, e.g. the grams in \"2.5 cups of flour to grams\". You can also use \"piece\", e.g. \"3.4 oz tomatoes to piece\"

begin
  #Convert Amounts
  result = api_instance.convert_amounts(ingredient_name, source_amount, source_unit, target_unit)
  p result
rescue OpenapiClient::ApiError => e
  puts "Exception when calling RecipesApi->convert_amounts: #{e}"
end
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ingredient_name** | **String**| The ingredient which you want to convert. | 
 **source_amount** | **Float**| The amount from which you want to convert, e.g. the 2.5 in \&quot;2.5 cups of flour to grams\&quot;. | 
 **source_unit** | **String**| The unit from which you want to convert, e.g. the grams in \&quot;2.5 cups of flour to grams\&quot;. You can also use \&quot;piece\&quot;, e.g. \&quot;3.4 oz tomatoes to piece\&quot; | 
 **target_unit** | **String**| The unit to which you want to convert, e.g. the grams in \&quot;2.5 cups of flour to grams\&quot;. You can also use \&quot;piece\&quot;, e.g. \&quot;3.4 oz tomatoes to piece\&quot; | 

### Return type

[**InlineResponse20019**](InlineResponse20019.md)

### Authorization

[apiKeyScheme](../README.md#apiKeyScheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## create_recipe_card

> InlineResponse20015 create_recipe_card(opts)

Create Recipe Card

Generate a recipe card for a recipe.

### Example

```ruby
# load the gem
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure API key authorization: apiKeyScheme
  config.api_key['apiKey'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['apiKey'] = 'Bearer'
end

api_instance = OpenapiClient::RecipesApi.new
opts = {
  content_type: 'application/json' # String | The content type.
}

begin
  #Create Recipe Card
  result = api_instance.create_recipe_card(opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Exception when calling RecipesApi->create_recipe_card: #{e}"
end
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **content_type** | **String**| The content type. | [optional] 

### Return type

[**InlineResponse20015**](InlineResponse20015.md)

### Authorization

[apiKeyScheme](../README.md#apiKeyScheme)

### HTTP request headers

- **Content-Type**: multipart/form-data
- **Accept**: application/json


## equipment_by_id_image

> Object equipment_by_id_image(id)

Equipment by ID Image

Visualize a recipe's equipment list as an image.

### Example

```ruby
# load the gem
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure API key authorization: apiKeyScheme
  config.api_key['apiKey'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['apiKey'] = 'Bearer'
end

api_instance = OpenapiClient::RecipesApi.new
id = 44860 # Float | The recipe id.

begin
  #Equipment by ID Image
  result = api_instance.equipment_by_id_image(id)
  p result
rescue OpenapiClient::ApiError => e
  puts "Exception when calling RecipesApi->equipment_by_id_image: #{e}"
end
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Float**| The recipe id. | 

### Return type

**Object**

### Authorization

[apiKeyScheme](../README.md#apiKeyScheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: image/png


## extract_recipe_from_website

> InlineResponse2003 extract_recipe_from_website(url, opts)

Extract Recipe from Website

This endpoint lets you extract recipe data such as title, ingredients, and instructions from any properly formatted Website.

### Example

```ruby
# load the gem
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure API key authorization: apiKeyScheme
  config.api_key['apiKey'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['apiKey'] = 'Bearer'
end

api_instance = OpenapiClient::RecipesApi.new
url = 'https://foodista.com/recipe/ZHK4KPB6/chocolate-crinkle-cookies' # String | The URL of the recipe page.
opts = {
  force_extraction: true, # Boolean | If true, the extraction will be triggered whether we already know the recipe or not. Use this only if information is missing as this operation is slower.
  analyze: false, # Boolean | If true, the recipe will be analyzed and classified resolving in more data such as cuisines, dish types, and more.
  include_nutrition: false, # Boolean | Include nutrition data in the recipe information. Nutrition data is per serving. If you want the nutrition data for the entire recipe, just multiply by the number of servings.
  include_taste: false # Boolean | Whether taste data should be added to correctly parsed ingredients.
}

begin
  #Extract Recipe from Website
  result = api_instance.extract_recipe_from_website(url, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Exception when calling RecipesApi->extract_recipe_from_website: #{e}"
end
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **url** | **String**| The URL of the recipe page. | 
 **force_extraction** | **Boolean**| If true, the extraction will be triggered whether we already know the recipe or not. Use this only if information is missing as this operation is slower. | [optional] 
 **analyze** | **Boolean**| If true, the recipe will be analyzed and classified resolving in more data such as cuisines, dish types, and more. | [optional] 
 **include_nutrition** | **Boolean**| Include nutrition data in the recipe information. Nutrition data is per serving. If you want the nutrition data for the entire recipe, just multiply by the number of servings. | [optional] [default to false]
 **include_taste** | **Boolean**| Whether taste data should be added to correctly parsed ingredients. | [optional] [default to false]

### Return type

[**InlineResponse2003**](InlineResponse2003.md)

### Authorization

[apiKeyScheme](../README.md#apiKeyScheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## get_analyzed_recipe_instructions

> InlineResponse20013 get_analyzed_recipe_instructions(id, opts)

Get Analyzed Recipe Instructions

Get an analyzed breakdown of a recipe's instructions. Each step is enriched with the ingredients and equipment required.

### Example

```ruby
# load the gem
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure API key authorization: apiKeyScheme
  config.api_key['apiKey'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['apiKey'] = 'Bearer'
end

api_instance = OpenapiClient::RecipesApi.new
id = 1 # Integer | The item's id.
opts = {
  step_breakdown: true # Boolean | Whether to break down the recipe steps even more.
}

begin
  #Get Analyzed Recipe Instructions
  result = api_instance.get_analyzed_recipe_instructions(id, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Exception when calling RecipesApi->get_analyzed_recipe_instructions: #{e}"
end
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| The item&#39;s id. | 
 **step_breakdown** | **Boolean**| Whether to break down the recipe steps even more. | [optional] 

### Return type

[**InlineResponse20013**](InlineResponse20013.md)

### Authorization

[apiKeyScheme](../README.md#apiKeyScheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## get_random_recipes

> InlineResponse2006 get_random_recipes(opts)

Get Random Recipes

Find random (popular) recipes. If you need to filter recipes by diet, nutrition etc. you might want to consider using the complex recipe search endpoint and set the sort request parameter to random.

### Example

```ruby
# load the gem
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure API key authorization: apiKeyScheme
  config.api_key['apiKey'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['apiKey'] = 'Bearer'
end

api_instance = OpenapiClient::RecipesApi.new
opts = {
  limit_license: true, # Boolean | Whether the recipes should have an open license that allows display with proper attribution.
  tags: 'tags_example', # String | The tags (can be diets, meal types, cuisines, or intolerances) that the recipe must have.
  number: 10 # Integer | The maximum number of items to return (between 1 and 100). Defaults to 10.
}

begin
  #Get Random Recipes
  result = api_instance.get_random_recipes(opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Exception when calling RecipesApi->get_random_recipes: #{e}"
end
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **limit_license** | **Boolean**| Whether the recipes should have an open license that allows display with proper attribution. | [optional] [default to true]
 **tags** | **String**| The tags (can be diets, meal types, cuisines, or intolerances) that the recipe must have. | [optional] 
 **number** | **Integer**| The maximum number of items to return (between 1 and 100). Defaults to 10. | [optional] [default to 10]

### Return type

[**InlineResponse2006**](InlineResponse2006.md)

### Authorization

[apiKeyScheme](../README.md#apiKeyScheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## get_recipe_equipment_by_id

> InlineResponse2009 get_recipe_equipment_by_id(id)

Equipment by ID

Get a recipe's equipment list.

### Example

```ruby
# load the gem
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure API key authorization: apiKeyScheme
  config.api_key['apiKey'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['apiKey'] = 'Bearer'
end

api_instance = OpenapiClient::RecipesApi.new
id = 1 # Integer | The item's id.

begin
  #Equipment by ID
  result = api_instance.get_recipe_equipment_by_id(id)
  p result
rescue OpenapiClient::ApiError => e
  puts "Exception when calling RecipesApi->get_recipe_equipment_by_id: #{e}"
end
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| The item&#39;s id. | 

### Return type

[**InlineResponse2009**](InlineResponse2009.md)

### Authorization

[apiKeyScheme](../README.md#apiKeyScheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## get_recipe_information

> InlineResponse2003 get_recipe_information(id, opts)

Get Recipe Information

Use a recipe id to get full information about a recipe, such as ingredients, nutrition, diet and allergen information, etc.

### Example

```ruby
# load the gem
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure API key authorization: apiKeyScheme
  config.api_key['apiKey'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['apiKey'] = 'Bearer'
end

api_instance = OpenapiClient::RecipesApi.new
id = 1 # Integer | The item's id.
opts = {
  include_nutrition: false # Boolean | Include nutrition data in the recipe information. Nutrition data is per serving. If you want the nutrition data for the entire recipe, just multiply by the number of servings.
}

begin
  #Get Recipe Information
  result = api_instance.get_recipe_information(id, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Exception when calling RecipesApi->get_recipe_information: #{e}"
end
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| The item&#39;s id. | 
 **include_nutrition** | **Boolean**| Include nutrition data in the recipe information. Nutrition data is per serving. If you want the nutrition data for the entire recipe, just multiply by the number of servings. | [optional] [default to false]

### Return type

[**InlineResponse2003**](InlineResponse2003.md)

### Authorization

[apiKeyScheme](../README.md#apiKeyScheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## get_recipe_information_bulk

> Array&lt;InlineResponse2004&gt; get_recipe_information_bulk(ids, opts)

Get Recipe Information Bulk

Get information about multiple recipes at once. This is equivalent to calling the Get Recipe Information endpoint multiple times, but faster.

### Example

```ruby
# load the gem
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure API key authorization: apiKeyScheme
  config.api_key['apiKey'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['apiKey'] = 'Bearer'
end

api_instance = OpenapiClient::RecipesApi.new
ids = '715538,716429' # String | A comma-separated list of recipe ids.
opts = {
  include_nutrition: false # Boolean | Include nutrition data in the recipe information. Nutrition data is per serving. If you want the nutrition data for the entire recipe, just multiply by the number of servings.
}

begin
  #Get Recipe Information Bulk
  result = api_instance.get_recipe_information_bulk(ids, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Exception when calling RecipesApi->get_recipe_information_bulk: #{e}"
end
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ids** | **String**| A comma-separated list of recipe ids. | 
 **include_nutrition** | **Boolean**| Include nutrition data in the recipe information. Nutrition data is per serving. If you want the nutrition data for the entire recipe, just multiply by the number of servings. | [optional] [default to false]

### Return type

[**Array&lt;InlineResponse2004&gt;**](InlineResponse2004.md)

### Authorization

[apiKeyScheme](../README.md#apiKeyScheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## get_recipe_ingredients_by_id

> InlineResponse20011 get_recipe_ingredients_by_id(id)

Ingredients by ID

Get a recipe's ingredient list.

### Example

```ruby
# load the gem
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure API key authorization: apiKeyScheme
  config.api_key['apiKey'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['apiKey'] = 'Bearer'
end

api_instance = OpenapiClient::RecipesApi.new
id = 1 # Integer | The item's id.

begin
  #Ingredients by ID
  result = api_instance.get_recipe_ingredients_by_id(id)
  p result
rescue OpenapiClient::ApiError => e
  puts "Exception when calling RecipesApi->get_recipe_ingredients_by_id: #{e}"
end
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| The item&#39;s id. | 

### Return type

[**InlineResponse20011**](InlineResponse20011.md)

### Authorization

[apiKeyScheme](../README.md#apiKeyScheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## get_recipe_nutrition_widget_by_id

> InlineResponse20012 get_recipe_nutrition_widget_by_id(id)

Nutrition by ID

Get a recipe's nutrition data.

### Example

```ruby
# load the gem
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure API key authorization: apiKeyScheme
  config.api_key['apiKey'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['apiKey'] = 'Bearer'
end

api_instance = OpenapiClient::RecipesApi.new
id = 1 # Integer | The item's id.

begin
  #Nutrition by ID
  result = api_instance.get_recipe_nutrition_widget_by_id(id)
  p result
rescue OpenapiClient::ApiError => e
  puts "Exception when calling RecipesApi->get_recipe_nutrition_widget_by_id: #{e}"
end
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| The item&#39;s id. | 

### Return type

[**InlineResponse20012**](InlineResponse20012.md)

### Authorization

[apiKeyScheme](../README.md#apiKeyScheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## get_recipe_price_breakdown_by_id

> InlineResponse20010 get_recipe_price_breakdown_by_id(id)

Price Breakdown by ID

Get a recipe's price breakdown data.

### Example

```ruby
# load the gem
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure API key authorization: apiKeyScheme
  config.api_key['apiKey'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['apiKey'] = 'Bearer'
end

api_instance = OpenapiClient::RecipesApi.new
id = 1 # Integer | The item's id.

begin
  #Price Breakdown by ID
  result = api_instance.get_recipe_price_breakdown_by_id(id)
  p result
rescue OpenapiClient::ApiError => e
  puts "Exception when calling RecipesApi->get_recipe_price_breakdown_by_id: #{e}"
end
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| The item&#39;s id. | 

### Return type

[**InlineResponse20010**](InlineResponse20010.md)

### Authorization

[apiKeyScheme](../README.md#apiKeyScheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## get_recipe_taste_by_id

> InlineResponse2008 get_recipe_taste_by_id(id, opts)

Taste by ID

Get a recipe's taste. The tastes supported are sweet, salty, sour, bitter, savory, and fatty.

### Example

```ruby
# load the gem
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure API key authorization: apiKeyScheme
  config.api_key['apiKey'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['apiKey'] = 'Bearer'
end

api_instance = OpenapiClient::RecipesApi.new
id = 1 # Integer | The item's id.
opts = {
  normalize: true # Boolean | Normalize to the strongest taste.
}

begin
  #Taste by ID
  result = api_instance.get_recipe_taste_by_id(id, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Exception when calling RecipesApi->get_recipe_taste_by_id: #{e}"
end
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| The item&#39;s id. | 
 **normalize** | **Boolean**| Normalize to the strongest taste. | [optional] [default to true]

### Return type

[**InlineResponse2008**](InlineResponse2008.md)

### Authorization

[apiKeyScheme](../README.md#apiKeyScheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## get_similar_recipes

> Array&lt;InlineResponse2005&gt; get_similar_recipes(id, opts)

Get Similar Recipes

Find recipes which are similar to the given one.

### Example

```ruby
# load the gem
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure API key authorization: apiKeyScheme
  config.api_key['apiKey'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['apiKey'] = 'Bearer'
end

api_instance = OpenapiClient::RecipesApi.new
id = 1 # Integer | The item's id.
opts = {
  number: 10, # Integer | The maximum number of items to return (between 1 and 100). Defaults to 10.
  limit_license: true # Boolean | Whether the recipes should have an open license that allows display with proper attribution.
}

begin
  #Get Similar Recipes
  result = api_instance.get_similar_recipes(id, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Exception when calling RecipesApi->get_similar_recipes: #{e}"
end
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| The item&#39;s id. | 
 **number** | **Integer**| The maximum number of items to return (between 1 and 100). Defaults to 10. | [optional] [default to 10]
 **limit_license** | **Boolean**| Whether the recipes should have an open license that allows display with proper attribution. | [optional] [default to true]

### Return type

[**Array&lt;InlineResponse2005&gt;**](InlineResponse2005.md)

### Authorization

[apiKeyScheme](../README.md#apiKeyScheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## guess_nutrition_by_dish_name

> InlineResponse20021 guess_nutrition_by_dish_name(title)

Guess Nutrition by Dish Name

Estimate the macronutrients of a dish based on its title.

### Example

```ruby
# load the gem
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure API key authorization: apiKeyScheme
  config.api_key['apiKey'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['apiKey'] = 'Bearer'
end

api_instance = OpenapiClient::RecipesApi.new
title = 'Spaghetti Aglio et Olio' # String | The title of the dish.

begin
  #Guess Nutrition by Dish Name
  result = api_instance.guess_nutrition_by_dish_name(title)
  p result
rescue OpenapiClient::ApiError => e
  puts "Exception when calling RecipesApi->guess_nutrition_by_dish_name: #{e}"
end
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **title** | **String**| The title of the dish. | 

### Return type

[**InlineResponse20021**](InlineResponse20021.md)

### Authorization

[apiKeyScheme](../README.md#apiKeyScheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## ingredients_by_id_image

> Object ingredients_by_id_image(id, opts)

Ingredients by ID Image

Visualize a recipe's ingredient list.

### Example

```ruby
# load the gem
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure API key authorization: apiKeyScheme
  config.api_key['apiKey'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['apiKey'] = 'Bearer'
end

api_instance = OpenapiClient::RecipesApi.new
id = 1082038 # Float | The recipe id.
opts = {
  measure: 'metric' # String | Whether the the measures should be 'us' or 'metric'.
}

begin
  #Ingredients by ID Image
  result = api_instance.ingredients_by_id_image(id, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Exception when calling RecipesApi->ingredients_by_id_image: #{e}"
end
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Float**| The recipe id. | 
 **measure** | **String**| Whether the the measures should be &#39;us&#39; or &#39;metric&#39;. | [optional] 

### Return type

**Object**

### Authorization

[apiKeyScheme](../README.md#apiKeyScheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: image/png


## parse_ingredients

> Array&lt;InlineResponse20020&gt; parse_ingredients(opts)

Parse Ingredients

Extract an ingredient from plain text.

### Example

```ruby
# load the gem
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure API key authorization: apiKeyScheme
  config.api_key['apiKey'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['apiKey'] = 'Bearer'
end

api_instance = OpenapiClient::RecipesApi.new
opts = {
  content_type: 'application/json', # String | The content type.
  language: 'en' # String | The language of the input. Either 'en' or 'de'.
}

begin
  #Parse Ingredients
  result = api_instance.parse_ingredients(opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Exception when calling RecipesApi->parse_ingredients: #{e}"
end
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **content_type** | **String**| The content type. | [optional] 
 **language** | **String**| The language of the input. Either &#39;en&#39; or &#39;de&#39;. | [optional] 

### Return type

[**Array&lt;InlineResponse20020&gt;**](InlineResponse20020.md)

### Authorization

[apiKeyScheme](../README.md#apiKeyScheme)

### HTTP request headers

- **Content-Type**: application/x-www-form-urlencoded
- **Accept**: application/json


## price_breakdown_by_id_image

> Object price_breakdown_by_id_image(id)

Price Breakdown by ID Image

Visualize a recipe's price breakdown.

### Example

```ruby
# load the gem
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure API key authorization: apiKeyScheme
  config.api_key['apiKey'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['apiKey'] = 'Bearer'
end

api_instance = OpenapiClient::RecipesApi.new
id = 1082038 # Float | The recipe id.

begin
  #Price Breakdown by ID Image
  result = api_instance.price_breakdown_by_id_image(id)
  p result
rescue OpenapiClient::ApiError => e
  puts "Exception when calling RecipesApi->price_breakdown_by_id_image: #{e}"
end
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Float**| The recipe id. | 

### Return type

**Object**

### Authorization

[apiKeyScheme](../README.md#apiKeyScheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: image/png


## quick_answer

> InlineResponse20049 quick_answer(q)

Quick Answer

Answer a nutrition related natural language question.

### Example

```ruby
# load the gem
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure API key authorization: apiKeyScheme
  config.api_key['apiKey'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['apiKey'] = 'Bearer'
end

api_instance = OpenapiClient::RecipesApi.new
q = 'How much vitamin c is in 2 apples?' # String | The nutrition related question.

begin
  #Quick Answer
  result = api_instance.quick_answer(q)
  p result
rescue OpenapiClient::ApiError => e
  puts "Exception when calling RecipesApi->quick_answer: #{e}"
end
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **q** | **String**| The nutrition related question. | 

### Return type

[**InlineResponse20049**](InlineResponse20049.md)

### Authorization

[apiKeyScheme](../README.md#apiKeyScheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## recipe_nutrition_by_id_image

> Object recipe_nutrition_by_id_image(id)

Recipe Nutrition by ID Image

Visualize a recipe's nutritional information as an image.

### Example

```ruby
# load the gem
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure API key authorization: apiKeyScheme
  config.api_key['apiKey'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['apiKey'] = 'Bearer'
end

api_instance = OpenapiClient::RecipesApi.new
id = 1082038 # Float | The recipe id.

begin
  #Recipe Nutrition by ID Image
  result = api_instance.recipe_nutrition_by_id_image(id)
  p result
rescue OpenapiClient::ApiError => e
  puts "Exception when calling RecipesApi->recipe_nutrition_by_id_image: #{e}"
end
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Float**| The recipe id. | 

### Return type

**Object**

### Authorization

[apiKeyScheme](../README.md#apiKeyScheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: image/png


## recipe_nutrition_label_image

> Object recipe_nutrition_label_image(id, opts)

Recipe Nutrition Label Image

Get a recipe's nutrition label as an image.

### Example

```ruby
# load the gem
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure API key authorization: apiKeyScheme
  config.api_key['apiKey'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['apiKey'] = 'Bearer'
end

api_instance = OpenapiClient::RecipesApi.new
id = 641166 # Float | The recipe id.
opts = {
  show_optional_nutrients: false, # Boolean | Whether to show optional nutrients.
  show_zero_values: false, # Boolean | Whether to show zero values.
  show_ingredients: false # Boolean | Whether to show a list of ingredients.
}

begin
  #Recipe Nutrition Label Image
  result = api_instance.recipe_nutrition_label_image(id, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Exception when calling RecipesApi->recipe_nutrition_label_image: #{e}"
end
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Float**| The recipe id. | 
 **show_optional_nutrients** | **Boolean**| Whether to show optional nutrients. | [optional] 
 **show_zero_values** | **Boolean**| Whether to show zero values. | [optional] 
 **show_ingredients** | **Boolean**| Whether to show a list of ingredients. | [optional] 

### Return type

**Object**

### Authorization

[apiKeyScheme](../README.md#apiKeyScheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: image/png


## recipe_nutrition_label_widget

> String recipe_nutrition_label_widget(id, opts)

Recipe Nutrition Label Widget

Get a recipe's nutrition label as an HTML widget.

### Example

```ruby
# load the gem
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure API key authorization: apiKeyScheme
  config.api_key['apiKey'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['apiKey'] = 'Bearer'
end

api_instance = OpenapiClient::RecipesApi.new
id = 641166 # Float | The recipe id.
opts = {
  default_css: true, # Boolean | Whether the default CSS should be added to the response.
  show_optional_nutrients: false, # Boolean | Whether to show optional nutrients.
  show_zero_values: false, # Boolean | Whether to show zero values.
  show_ingredients: false # Boolean | Whether to show a list of ingredients.
}

begin
  #Recipe Nutrition Label Widget
  result = api_instance.recipe_nutrition_label_widget(id, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Exception when calling RecipesApi->recipe_nutrition_label_widget: #{e}"
end
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Float**| The recipe id. | 
 **default_css** | **Boolean**| Whether the default CSS should be added to the response. | [optional] [default to true]
 **show_optional_nutrients** | **Boolean**| Whether to show optional nutrients. | [optional] 
 **show_zero_values** | **Boolean**| Whether to show zero values. | [optional] 
 **show_ingredients** | **Boolean**| Whether to show a list of ingredients. | [optional] 

### Return type

**String**

### Authorization

[apiKeyScheme](../README.md#apiKeyScheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: text/html


## recipe_taste_by_id_image

> Object recipe_taste_by_id_image(id, opts)

Recipe Taste by ID Image

Get a recipe's taste as an image. The tastes supported are sweet, salty, sour, bitter, savory, and fatty.

### Example

```ruby
# load the gem
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure API key authorization: apiKeyScheme
  config.api_key['apiKey'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['apiKey'] = 'Bearer'
end

api_instance = OpenapiClient::RecipesApi.new
id = 69095 # Float | The recipe id.
opts = {
  normalize: false, # Boolean | Normalize to the strongest taste.
  rgb: '75,192,192' # String | Red, green, blue values for the chart color.
}

begin
  #Recipe Taste by ID Image
  result = api_instance.recipe_taste_by_id_image(id, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Exception when calling RecipesApi->recipe_taste_by_id_image: #{e}"
end
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Float**| The recipe id. | 
 **normalize** | **Boolean**| Normalize to the strongest taste. | [optional] 
 **rgb** | **String**| Red, green, blue values for the chart color. | [optional] 

### Return type

**Object**

### Authorization

[apiKeyScheme](../README.md#apiKeyScheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: image/png


## search_recipes

> InlineResponse200 search_recipes(opts)

Search Recipes

Search through hundreds of thousands of recipes using advanced filtering and ranking. NOTE: This method combines searching by query, by ingredients, and by nutrients into one endpoint.

### Example

```ruby
# load the gem
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure API key authorization: apiKeyScheme
  config.api_key['apiKey'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['apiKey'] = 'Bearer'
end

api_instance = OpenapiClient::RecipesApi.new
opts = {
  query: 'burger', # String | The (natural language) search query.
  cuisine: 'italian', # String | The cuisine(s) of the recipes. One or more, comma separated (will be interpreted as 'OR'). See a full list of supported cuisines.
  exclude_cuisine: 'greek', # String | The cuisine(s) the recipes must not match. One or more, comma separated (will be interpreted as 'AND'). See a full list of supported cuisines.
  diet: 'vegetarian', # String | The diet for which the recipes must be suitable. See a full list of supported diets.
  intolerances: 'gluten', # String | A comma-separated list of intolerances. All recipes returned must not contain ingredients that are not suitable for people with the intolerances entered. See a full list of supported intolerances.
  equipment: 'pan', # String | The equipment required. Multiple values will be interpreted as 'or'. For example, value could be \"blender, frying pan, bowl\".
  include_ingredients: 'tomato,cheese', # String | A comma-separated list of ingredients that should/must be used in the recipes.
  exclude_ingredients: 'eggs', # String | A comma-separated list of ingredients or ingredient types that the recipes must not contain.
  type: 'main course', # String | The type of recipe. See a full list of supported meal types.
  instructions_required: true, # Boolean | Whether the recipes must have instructions.
  fill_ingredients: false, # Boolean | Add information about the ingredients and whether they are used or missing in relation to the query.
  add_recipe_information: false, # Boolean | If set to true, you get more information about the recipes returned.
  add_recipe_nutrition: false, # Boolean | If set to true, you get nutritional information about each recipes returned.
  author: 'coffeebean', # String | The username of the recipe author.
  tags: 'tags_example', # String | The tags (can be diets, meal types, cuisines, or intolerances) that the recipe must have.
  recipe_box_id: 2468, # Float | The id of the recipe box to which the search should be limited to.
  title_match: 'Crock Pot', # String | Enter text that must be found in the title of the recipes.
  max_ready_time: 20, # Float | The maximum time in minutes it should take to prepare and cook the recipe.
  ignore_pantry: false, # Boolean | Whether to ignore typical pantry items, such as water, salt, flour, etc.
  sort: 'calories', # String | The strategy to sort recipes by. See a full list of supported sorting options.
  sort_direction: 'asc', # String | The direction in which to sort. Must be either 'asc' (ascending) or 'desc' (descending).
  min_carbs: 10, # Float | The minimum amount of carbohydrates in grams the recipe must have.
  max_carbs: 100, # Float | The maximum amount of carbohydrates in grams the recipe can have.
  min_protein: 10, # Float | The minimum amount of protein in grams the recipe must have.
  max_protein: 100, # Float | The maximum amount of protein in grams the recipe can have.
  min_calories: 50, # Float | The minimum amount of calories the recipe must have.
  max_calories: 800, # Float | The maximum amount of calories the recipe can have.
  min_fat: 1, # Float | The minimum amount of fat in grams the recipe must have.
  max_fat: 100, # Float | The maximum amount of fat in grams the recipe can have.
  min_alcohol: 0, # Float | The minimum amount of alcohol in grams the recipe must have.
  max_alcohol: 100, # Float | The maximum amount of alcohol in grams the recipe can have.
  min_caffeine: 0, # Float | The minimum amount of caffeine in milligrams the recipe must have.
  max_caffeine: 100, # Float | The maximum amount of caffeine in milligrams the recipe can have.
  min_copper: 0, # Float | The minimum amount of copper in milligrams the recipe must have.
  max_copper: 100, # Float | The maximum amount of copper in milligrams the recipe can have.
  min_calcium: 0, # Float | The minimum amount of calcium in milligrams the recipe must have.
  max_calcium: 100, # Float | The maximum amount of calcium in milligrams the recipe can have.
  min_choline: 0, # Float | The minimum amount of choline in milligrams the recipe must have.
  max_choline: 100, # Float | The maximum amount of choline in milligrams the recipe can have.
  min_cholesterol: 0, # Float | The minimum amount of cholesterol in milligrams the recipe must have.
  max_cholesterol: 100, # Float | The maximum amount of cholesterol in milligrams the recipe can have.
  min_fluoride: 0, # Float | The minimum amount of fluoride in milligrams the recipe must have.
  max_fluoride: 100, # Float | The maximum amount of fluoride in milligrams the recipe can have.
  min_saturated_fat: 0, # Float | The minimum amount of saturated fat in grams the recipe must have.
  max_saturated_fat: 100, # Float | The maximum amount of saturated fat in grams the recipe can have.
  min_vitamin_a: 0, # Float | The minimum amount of Vitamin A in IU the recipe must have.
  max_vitamin_a: 100, # Float | The maximum amount of Vitamin A in IU the recipe can have.
  min_vitamin_c: 0, # Float | The minimum amount of Vitamin C milligrams the recipe must have.
  max_vitamin_c: 100, # Float | The maximum amount of Vitamin C in milligrams the recipe can have.
  min_vitamin_d: 0, # Float | The minimum amount of Vitamin D in micrograms the recipe must have.
  max_vitamin_d: 100, # Float | The maximum amount of Vitamin D in micrograms the recipe can have.
  min_vitamin_e: 0, # Float | The minimum amount of Vitamin E in milligrams the recipe must have.
  max_vitamin_e: 100, # Float | The maximum amount of Vitamin E in milligrams the recipe can have.
  min_vitamin_k: 0, # Float | The minimum amount of Vitamin K in micrograms the recipe must have.
  max_vitamin_k: 100, # Float | The maximum amount of Vitamin K in micrograms the recipe can have.
  min_vitamin_b1: 0, # Float | The minimum amount of Vitamin B1 in milligrams the recipe must have.
  max_vitamin_b1: 100, # Float | The maximum amount of Vitamin B1 in milligrams the recipe can have.
  min_vitamin_b2: 0, # Float | The minimum amount of Vitamin B2 in milligrams the recipe must have.
  max_vitamin_b2: 100, # Float | The maximum amount of Vitamin B2 in milligrams the recipe can have.
  min_vitamin_b5: 0, # Float | The minimum amount of Vitamin B5 in milligrams the recipe must have.
  max_vitamin_b5: 100, # Float | The maximum amount of Vitamin B5 in milligrams the recipe can have.
  min_vitamin_b3: 0, # Float | The minimum amount of Vitamin B3 in milligrams the recipe must have.
  max_vitamin_b3: 100, # Float | The maximum amount of Vitamin B3 in milligrams the recipe can have.
  min_vitamin_b6: 0, # Float | The minimum amount of Vitamin B6 in milligrams the recipe must have.
  max_vitamin_b6: 100, # Float | The maximum amount of Vitamin B6 in milligrams the recipe can have.
  min_vitamin_b12: 0, # Float | The minimum amount of Vitamin B12 in micrograms the recipe must have.
  max_vitamin_b12: 100, # Float | The maximum amount of Vitamin B12 in micrograms the recipe can have.
  min_fiber: 0, # Float | The minimum amount of fiber in grams the recipe must have.
  max_fiber: 100, # Float | The maximum amount of fiber in grams the recipe can have.
  min_folate: 0, # Float | The minimum amount of folate in micrograms the recipe must have.
  max_folate: 100, # Float | The maximum amount of folate in micrograms the recipe can have.
  min_folic_acid: 0, # Float | The minimum amount of folic acid in micrograms the recipe must have.
  max_folic_acid: 100, # Float | The maximum amount of folic acid in micrograms the recipe can have.
  min_iodine: 0, # Float | The minimum amount of iodine in micrograms the recipe must have.
  max_iodine: 100, # Float | The maximum amount of iodine in micrograms the recipe can have.
  min_iron: 0, # Float | The minimum amount of iron in milligrams the recipe must have.
  max_iron: 100, # Float | The maximum amount of iron in milligrams the recipe can have.
  min_magnesium: 0, # Float | The minimum amount of magnesium in milligrams the recipe must have.
  max_magnesium: 100, # Float | The maximum amount of magnesium in milligrams the recipe can have.
  min_manganese: 0, # Float | The minimum amount of manganese in milligrams the recipe must have.
  max_manganese: 100, # Float | The maximum amount of manganese in milligrams the recipe can have.
  min_phosphorus: 0, # Float | The minimum amount of phosphorus in milligrams the recipe must have.
  max_phosphorus: 100, # Float | The maximum amount of phosphorus in milligrams the recipe can have.
  min_potassium: 0, # Float | The minimum amount of potassium in milligrams the recipe must have.
  max_potassium: 100, # Float | The maximum amount of potassium in milligrams the recipe can have.
  min_selenium: 0, # Float | The minimum amount of selenium in micrograms the recipe must have.
  max_selenium: 100, # Float | The maximum amount of selenium in micrograms the recipe can have.
  min_sodium: 0, # Float | The minimum amount of sodium in milligrams the recipe must have.
  max_sodium: 100, # Float | The maximum amount of sodium in milligrams the recipe can have.
  min_sugar: 0, # Float | The minimum amount of sugar in grams the recipe must have.
  max_sugar: 100, # Float | The maximum amount of sugar in grams the recipe can have.
  min_zinc: 0, # Float | The minimum amount of zinc in milligrams the recipe must have.
  max_zinc: 100, # Float | The maximum amount of zinc in milligrams the recipe can have.
  offset: 56, # Integer | The number of results to skip (between 0 and 900).
  number: 10, # Integer | The maximum number of items to return (between 1 and 100). Defaults to 10.
  limit_license: true # Boolean | Whether the recipes should have an open license that allows display with proper attribution.
}

begin
  #Search Recipes
  result = api_instance.search_recipes(opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Exception when calling RecipesApi->search_recipes: #{e}"
end
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **query** | **String**| The (natural language) search query. | [optional] 
 **cuisine** | **String**| The cuisine(s) of the recipes. One or more, comma separated (will be interpreted as &#39;OR&#39;). See a full list of supported cuisines. | [optional] 
 **exclude_cuisine** | **String**| The cuisine(s) the recipes must not match. One or more, comma separated (will be interpreted as &#39;AND&#39;). See a full list of supported cuisines. | [optional] 
 **diet** | **String**| The diet for which the recipes must be suitable. See a full list of supported diets. | [optional] 
 **intolerances** | **String**| A comma-separated list of intolerances. All recipes returned must not contain ingredients that are not suitable for people with the intolerances entered. See a full list of supported intolerances. | [optional] 
 **equipment** | **String**| The equipment required. Multiple values will be interpreted as &#39;or&#39;. For example, value could be \&quot;blender, frying pan, bowl\&quot;. | [optional] 
 **include_ingredients** | **String**| A comma-separated list of ingredients that should/must be used in the recipes. | [optional] 
 **exclude_ingredients** | **String**| A comma-separated list of ingredients or ingredient types that the recipes must not contain. | [optional] 
 **type** | **String**| The type of recipe. See a full list of supported meal types. | [optional] 
 **instructions_required** | **Boolean**| Whether the recipes must have instructions. | [optional] 
 **fill_ingredients** | **Boolean**| Add information about the ingredients and whether they are used or missing in relation to the query. | [optional] 
 **add_recipe_information** | **Boolean**| If set to true, you get more information about the recipes returned. | [optional] 
 **add_recipe_nutrition** | **Boolean**| If set to true, you get nutritional information about each recipes returned. | [optional] 
 **author** | **String**| The username of the recipe author. | [optional] 
 **tags** | **String**| The tags (can be diets, meal types, cuisines, or intolerances) that the recipe must have. | [optional] 
 **recipe_box_id** | **Float**| The id of the recipe box to which the search should be limited to. | [optional] 
 **title_match** | **String**| Enter text that must be found in the title of the recipes. | [optional] 
 **max_ready_time** | **Float**| The maximum time in minutes it should take to prepare and cook the recipe. | [optional] 
 **ignore_pantry** | **Boolean**| Whether to ignore typical pantry items, such as water, salt, flour, etc. | [optional] [default to false]
 **sort** | **String**| The strategy to sort recipes by. See a full list of supported sorting options. | [optional] 
 **sort_direction** | **String**| The direction in which to sort. Must be either &#39;asc&#39; (ascending) or &#39;desc&#39; (descending). | [optional] 
 **min_carbs** | **Float**| The minimum amount of carbohydrates in grams the recipe must have. | [optional] 
 **max_carbs** | **Float**| The maximum amount of carbohydrates in grams the recipe can have. | [optional] 
 **min_protein** | **Float**| The minimum amount of protein in grams the recipe must have. | [optional] 
 **max_protein** | **Float**| The maximum amount of protein in grams the recipe can have. | [optional] 
 **min_calories** | **Float**| The minimum amount of calories the recipe must have. | [optional] 
 **max_calories** | **Float**| The maximum amount of calories the recipe can have. | [optional] 
 **min_fat** | **Float**| The minimum amount of fat in grams the recipe must have. | [optional] 
 **max_fat** | **Float**| The maximum amount of fat in grams the recipe can have. | [optional] 
 **min_alcohol** | **Float**| The minimum amount of alcohol in grams the recipe must have. | [optional] 
 **max_alcohol** | **Float**| The maximum amount of alcohol in grams the recipe can have. | [optional] 
 **min_caffeine** | **Float**| The minimum amount of caffeine in milligrams the recipe must have. | [optional] 
 **max_caffeine** | **Float**| The maximum amount of caffeine in milligrams the recipe can have. | [optional] 
 **min_copper** | **Float**| The minimum amount of copper in milligrams the recipe must have. | [optional] 
 **max_copper** | **Float**| The maximum amount of copper in milligrams the recipe can have. | [optional] 
 **min_calcium** | **Float**| The minimum amount of calcium in milligrams the recipe must have. | [optional] 
 **max_calcium** | **Float**| The maximum amount of calcium in milligrams the recipe can have. | [optional] 
 **min_choline** | **Float**| The minimum amount of choline in milligrams the recipe must have. | [optional] 
 **max_choline** | **Float**| The maximum amount of choline in milligrams the recipe can have. | [optional] 
 **min_cholesterol** | **Float**| The minimum amount of cholesterol in milligrams the recipe must have. | [optional] 
 **max_cholesterol** | **Float**| The maximum amount of cholesterol in milligrams the recipe can have. | [optional] 
 **min_fluoride** | **Float**| The minimum amount of fluoride in milligrams the recipe must have. | [optional] 
 **max_fluoride** | **Float**| The maximum amount of fluoride in milligrams the recipe can have. | [optional] 
 **min_saturated_fat** | **Float**| The minimum amount of saturated fat in grams the recipe must have. | [optional] 
 **max_saturated_fat** | **Float**| The maximum amount of saturated fat in grams the recipe can have. | [optional] 
 **min_vitamin_a** | **Float**| The minimum amount of Vitamin A in IU the recipe must have. | [optional] 
 **max_vitamin_a** | **Float**| The maximum amount of Vitamin A in IU the recipe can have. | [optional] 
 **min_vitamin_c** | **Float**| The minimum amount of Vitamin C milligrams the recipe must have. | [optional] 
 **max_vitamin_c** | **Float**| The maximum amount of Vitamin C in milligrams the recipe can have. | [optional] 
 **min_vitamin_d** | **Float**| The minimum amount of Vitamin D in micrograms the recipe must have. | [optional] 
 **max_vitamin_d** | **Float**| The maximum amount of Vitamin D in micrograms the recipe can have. | [optional] 
 **min_vitamin_e** | **Float**| The minimum amount of Vitamin E in milligrams the recipe must have. | [optional] 
 **max_vitamin_e** | **Float**| The maximum amount of Vitamin E in milligrams the recipe can have. | [optional] 
 **min_vitamin_k** | **Float**| The minimum amount of Vitamin K in micrograms the recipe must have. | [optional] 
 **max_vitamin_k** | **Float**| The maximum amount of Vitamin K in micrograms the recipe can have. | [optional] 
 **min_vitamin_b1** | **Float**| The minimum amount of Vitamin B1 in milligrams the recipe must have. | [optional] 
 **max_vitamin_b1** | **Float**| The maximum amount of Vitamin B1 in milligrams the recipe can have. | [optional] 
 **min_vitamin_b2** | **Float**| The minimum amount of Vitamin B2 in milligrams the recipe must have. | [optional] 
 **max_vitamin_b2** | **Float**| The maximum amount of Vitamin B2 in milligrams the recipe can have. | [optional] 
 **min_vitamin_b5** | **Float**| The minimum amount of Vitamin B5 in milligrams the recipe must have. | [optional] 
 **max_vitamin_b5** | **Float**| The maximum amount of Vitamin B5 in milligrams the recipe can have. | [optional] 
 **min_vitamin_b3** | **Float**| The minimum amount of Vitamin B3 in milligrams the recipe must have. | [optional] 
 **max_vitamin_b3** | **Float**| The maximum amount of Vitamin B3 in milligrams the recipe can have. | [optional] 
 **min_vitamin_b6** | **Float**| The minimum amount of Vitamin B6 in milligrams the recipe must have. | [optional] 
 **max_vitamin_b6** | **Float**| The maximum amount of Vitamin B6 in milligrams the recipe can have. | [optional] 
 **min_vitamin_b12** | **Float**| The minimum amount of Vitamin B12 in micrograms the recipe must have. | [optional] 
 **max_vitamin_b12** | **Float**| The maximum amount of Vitamin B12 in micrograms the recipe can have. | [optional] 
 **min_fiber** | **Float**| The minimum amount of fiber in grams the recipe must have. | [optional] 
 **max_fiber** | **Float**| The maximum amount of fiber in grams the recipe can have. | [optional] 
 **min_folate** | **Float**| The minimum amount of folate in micrograms the recipe must have. | [optional] 
 **max_folate** | **Float**| The maximum amount of folate in micrograms the recipe can have. | [optional] 
 **min_folic_acid** | **Float**| The minimum amount of folic acid in micrograms the recipe must have. | [optional] 
 **max_folic_acid** | **Float**| The maximum amount of folic acid in micrograms the recipe can have. | [optional] 
 **min_iodine** | **Float**| The minimum amount of iodine in micrograms the recipe must have. | [optional] 
 **max_iodine** | **Float**| The maximum amount of iodine in micrograms the recipe can have. | [optional] 
 **min_iron** | **Float**| The minimum amount of iron in milligrams the recipe must have. | [optional] 
 **max_iron** | **Float**| The maximum amount of iron in milligrams the recipe can have. | [optional] 
 **min_magnesium** | **Float**| The minimum amount of magnesium in milligrams the recipe must have. | [optional] 
 **max_magnesium** | **Float**| The maximum amount of magnesium in milligrams the recipe can have. | [optional] 
 **min_manganese** | **Float**| The minimum amount of manganese in milligrams the recipe must have. | [optional] 
 **max_manganese** | **Float**| The maximum amount of manganese in milligrams the recipe can have. | [optional] 
 **min_phosphorus** | **Float**| The minimum amount of phosphorus in milligrams the recipe must have. | [optional] 
 **max_phosphorus** | **Float**| The maximum amount of phosphorus in milligrams the recipe can have. | [optional] 
 **min_potassium** | **Float**| The minimum amount of potassium in milligrams the recipe must have. | [optional] 
 **max_potassium** | **Float**| The maximum amount of potassium in milligrams the recipe can have. | [optional] 
 **min_selenium** | **Float**| The minimum amount of selenium in micrograms the recipe must have. | [optional] 
 **max_selenium** | **Float**| The maximum amount of selenium in micrograms the recipe can have. | [optional] 
 **min_sodium** | **Float**| The minimum amount of sodium in milligrams the recipe must have. | [optional] 
 **max_sodium** | **Float**| The maximum amount of sodium in milligrams the recipe can have. | [optional] 
 **min_sugar** | **Float**| The minimum amount of sugar in grams the recipe must have. | [optional] 
 **max_sugar** | **Float**| The maximum amount of sugar in grams the recipe can have. | [optional] 
 **min_zinc** | **Float**| The minimum amount of zinc in milligrams the recipe must have. | [optional] 
 **max_zinc** | **Float**| The maximum amount of zinc in milligrams the recipe can have. | [optional] 
 **offset** | **Integer**| The number of results to skip (between 0 and 900). | [optional] 
 **number** | **Integer**| The maximum number of items to return (between 1 and 100). Defaults to 10. | [optional] [default to 10]
 **limit_license** | **Boolean**| Whether the recipes should have an open license that allows display with proper attribution. | [optional] [default to true]

### Return type

[**InlineResponse200**](InlineResponse200.md)

### Authorization

[apiKeyScheme](../README.md#apiKeyScheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## search_recipes_by_ingredients

> Array&lt;InlineResponse2001&gt; search_recipes_by_ingredients(opts)

Search Recipes by Ingredients

 Ever wondered what recipes you can cook with the ingredients you have in your fridge or pantry? This endpoint lets you find recipes that either maximize the usage of ingredients you have at hand (pre shopping) or minimize the ingredients that you don't currently have (post shopping).         

### Example

```ruby
# load the gem
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure API key authorization: apiKeyScheme
  config.api_key['apiKey'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['apiKey'] = 'Bearer'
end

api_instance = OpenapiClient::RecipesApi.new
opts = {
  ingredients: 'carrots,tomatoes', # String | A comma-separated list of ingredients that the recipes should contain.
  number: 10, # Integer | The maximum number of items to return (between 1 and 100). Defaults to 10.
  limit_license: true, # Boolean | Whether the recipes should have an open license that allows display with proper attribution.
  ranking: 1, # Float | Whether to maximize used ingredients (1) or minimize missing ingredients (2) first.
  ignore_pantry: false # Boolean | Whether to ignore typical pantry items, such as water, salt, flour, etc.
}

begin
  #Search Recipes by Ingredients
  result = api_instance.search_recipes_by_ingredients(opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Exception when calling RecipesApi->search_recipes_by_ingredients: #{e}"
end
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ingredients** | **String**| A comma-separated list of ingredients that the recipes should contain. | [optional] 
 **number** | **Integer**| The maximum number of items to return (between 1 and 100). Defaults to 10. | [optional] [default to 10]
 **limit_license** | **Boolean**| Whether the recipes should have an open license that allows display with proper attribution. | [optional] [default to true]
 **ranking** | **Float**| Whether to maximize used ingredients (1) or minimize missing ingredients (2) first. | [optional] 
 **ignore_pantry** | **Boolean**| Whether to ignore typical pantry items, such as water, salt, flour, etc. | [optional] [default to false]

### Return type

[**Array&lt;InlineResponse2001&gt;**](InlineResponse2001.md)

### Authorization

[apiKeyScheme](../README.md#apiKeyScheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## search_recipes_by_nutrients

> Array&lt;InlineResponse2002&gt; search_recipes_by_nutrients(opts)

Search Recipes by Nutrients

Find a set of recipes that adhere to the given nutritional limits. You may set limits for macronutrients (calories, protein, fat, and carbohydrate) and/or many micronutrients.

### Example

```ruby
# load the gem
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure API key authorization: apiKeyScheme
  config.api_key['apiKey'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['apiKey'] = 'Bearer'
end

api_instance = OpenapiClient::RecipesApi.new
opts = {
  min_carbs: 10, # Float | The minimum amount of carbohydrates in grams the recipe must have.
  max_carbs: 100, # Float | The maximum amount of carbohydrates in grams the recipe can have.
  min_protein: 10, # Float | The minimum amount of protein in grams the recipe must have.
  max_protein: 100, # Float | The maximum amount of protein in grams the recipe can have.
  min_calories: 50, # Float | The minimum amount of calories the recipe must have.
  max_calories: 800, # Float | The maximum amount of calories the recipe can have.
  min_fat: 1, # Float | The minimum amount of fat in grams the recipe must have.
  max_fat: 100, # Float | The maximum amount of fat in grams the recipe can have.
  min_alcohol: 0, # Float | The minimum amount of alcohol in grams the recipe must have.
  max_alcohol: 100, # Float | The maximum amount of alcohol in grams the recipe can have.
  min_caffeine: 0, # Float | The minimum amount of caffeine in milligrams the recipe must have.
  max_caffeine: 100, # Float | The maximum amount of caffeine in milligrams the recipe can have.
  min_copper: 0, # Float | The minimum amount of copper in milligrams the recipe must have.
  max_copper: 100, # Float | The maximum amount of copper in milligrams the recipe can have.
  min_calcium: 0, # Float | The minimum amount of calcium in milligrams the recipe must have.
  max_calcium: 100, # Float | The maximum amount of calcium in milligrams the recipe can have.
  min_choline: 0, # Float | The minimum amount of choline in milligrams the recipe must have.
  max_choline: 100, # Float | The maximum amount of choline in milligrams the recipe can have.
  min_cholesterol: 0, # Float | The minimum amount of cholesterol in milligrams the recipe must have.
  max_cholesterol: 100, # Float | The maximum amount of cholesterol in milligrams the recipe can have.
  min_fluoride: 0, # Float | The minimum amount of fluoride in milligrams the recipe must have.
  max_fluoride: 100, # Float | The maximum amount of fluoride in milligrams the recipe can have.
  min_saturated_fat: 0, # Float | The minimum amount of saturated fat in grams the recipe must have.
  max_saturated_fat: 100, # Float | The maximum amount of saturated fat in grams the recipe can have.
  min_vitamin_a: 0, # Float | The minimum amount of Vitamin A in IU the recipe must have.
  max_vitamin_a: 100, # Float | The maximum amount of Vitamin A in IU the recipe can have.
  min_vitamin_c: 0, # Float | The minimum amount of Vitamin C in milligrams the recipe must have.
  max_vitamin_c: 100, # Float | The maximum amount of Vitamin C in milligrams the recipe can have.
  min_vitamin_d: 0, # Float | The minimum amount of Vitamin D in micrograms the recipe must have.
  max_vitamin_d: 100, # Float | The maximum amount of Vitamin D in micrograms the recipe can have.
  min_vitamin_e: 0, # Float | The minimum amount of Vitamin E in milligrams the recipe must have.
  max_vitamin_e: 100, # Float | The maximum amount of Vitamin E in milligrams the recipe can have.
  min_vitamin_k: 0, # Float | The minimum amount of Vitamin K in micrograms the recipe must have.
  max_vitamin_k: 100, # Float | The maximum amount of Vitamin K in micrograms the recipe can have.
  min_vitamin_b1: 0, # Float | The minimum amount of Vitamin B1 in milligrams the recipe must have.
  max_vitamin_b1: 100, # Float | The maximum amount of Vitamin B1 in milligrams the recipe can have.
  min_vitamin_b2: 0, # Float | The minimum amount of Vitamin B2 in milligrams the recipe must have.
  max_vitamin_b2: 100, # Float | The maximum amount of Vitamin B2 in milligrams the recipe can have.
  min_vitamin_b5: 0, # Float | The minimum amount of Vitamin B5 in milligrams the recipe must have.
  max_vitamin_b5: 100, # Float | The maximum amount of Vitamin B5 in milligrams the recipe can have.
  min_vitamin_b3: 0, # Float | The minimum amount of Vitamin B3 in milligrams the recipe must have.
  max_vitamin_b3: 100, # Float | The maximum amount of Vitamin B3 in milligrams the recipe can have.
  min_vitamin_b6: 0, # Float | The minimum amount of Vitamin B6 in milligrams the recipe must have.
  max_vitamin_b6: 100, # Float | The maximum amount of Vitamin B6 in milligrams the recipe can have.
  min_vitamin_b12: 0, # Float | The minimum amount of Vitamin B12 in micrograms the recipe must have.
  max_vitamin_b12: 100, # Float | The maximum amount of Vitamin B12 in micrograms the recipe can have.
  min_fiber: 0, # Float | The minimum amount of fiber in grams the recipe must have.
  max_fiber: 100, # Float | The maximum amount of fiber in grams the recipe can have.
  min_folate: 0, # Float | The minimum amount of folate in micrograms the recipe must have.
  max_folate: 100, # Float | The maximum amount of folate in micrograms the recipe can have.
  min_folic_acid: 0, # Float | The minimum amount of folic acid in micrograms the recipe must have.
  max_folic_acid: 100, # Float | The maximum amount of folic acid in micrograms the recipe can have.
  min_iodine: 0, # Float | The minimum amount of iodine in micrograms the recipe must have.
  max_iodine: 100, # Float | The maximum amount of iodine in micrograms the recipe can have.
  min_iron: 0, # Float | The minimum amount of iron in milligrams the recipe must have.
  max_iron: 100, # Float | The maximum amount of iron in milligrams the recipe can have.
  min_magnesium: 0, # Float | The minimum amount of magnesium in milligrams the recipe must have.
  max_magnesium: 100, # Float | The maximum amount of magnesium in milligrams the recipe can have.
  min_manganese: 0, # Float | The minimum amount of manganese in milligrams the recipe must have.
  max_manganese: 100, # Float | The maximum amount of manganese in milligrams the recipe can have.
  min_phosphorus: 0, # Float | The minimum amount of phosphorus in milligrams the recipe must have.
  max_phosphorus: 100, # Float | The maximum amount of phosphorus in milligrams the recipe can have.
  min_potassium: 0, # Float | The minimum amount of potassium in milligrams the recipe must have.
  max_potassium: 100, # Float | The maximum amount of potassium in milligrams the recipe can have.
  min_selenium: 0, # Float | The minimum amount of selenium in micrograms the recipe must have.
  max_selenium: 100, # Float | The maximum amount of selenium in micrograms the recipe can have.
  min_sodium: 0, # Float | The minimum amount of sodium in milligrams the recipe must have.
  max_sodium: 100, # Float | The maximum amount of sodium in milligrams the recipe can have.
  min_sugar: 0, # Float | The minimum amount of sugar in grams the recipe must have.
  max_sugar: 100, # Float | The maximum amount of sugar in grams the recipe can have.
  min_zinc: 0, # Float | The minimum amount of zinc in milligrams the recipe must have.
  max_zinc: 100, # Float | The maximum amount of zinc in milligrams the recipe can have.
  offset: 56, # Integer | The number of results to skip (between 0 and 900).
  number: 10, # Integer | The maximum number of items to return (between 1 and 100). Defaults to 10.
  random: false, # Boolean | If true, every request will give you a random set of recipes within the requested limits.
  limit_license: true # Boolean | Whether the recipes should have an open license that allows display with proper attribution.
}

begin
  #Search Recipes by Nutrients
  result = api_instance.search_recipes_by_nutrients(opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Exception when calling RecipesApi->search_recipes_by_nutrients: #{e}"
end
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **min_carbs** | **Float**| The minimum amount of carbohydrates in grams the recipe must have. | [optional] 
 **max_carbs** | **Float**| The maximum amount of carbohydrates in grams the recipe can have. | [optional] 
 **min_protein** | **Float**| The minimum amount of protein in grams the recipe must have. | [optional] 
 **max_protein** | **Float**| The maximum amount of protein in grams the recipe can have. | [optional] 
 **min_calories** | **Float**| The minimum amount of calories the recipe must have. | [optional] 
 **max_calories** | **Float**| The maximum amount of calories the recipe can have. | [optional] 
 **min_fat** | **Float**| The minimum amount of fat in grams the recipe must have. | [optional] 
 **max_fat** | **Float**| The maximum amount of fat in grams the recipe can have. | [optional] 
 **min_alcohol** | **Float**| The minimum amount of alcohol in grams the recipe must have. | [optional] 
 **max_alcohol** | **Float**| The maximum amount of alcohol in grams the recipe can have. | [optional] 
 **min_caffeine** | **Float**| The minimum amount of caffeine in milligrams the recipe must have. | [optional] 
 **max_caffeine** | **Float**| The maximum amount of caffeine in milligrams the recipe can have. | [optional] 
 **min_copper** | **Float**| The minimum amount of copper in milligrams the recipe must have. | [optional] 
 **max_copper** | **Float**| The maximum amount of copper in milligrams the recipe can have. | [optional] 
 **min_calcium** | **Float**| The minimum amount of calcium in milligrams the recipe must have. | [optional] 
 **max_calcium** | **Float**| The maximum amount of calcium in milligrams the recipe can have. | [optional] 
 **min_choline** | **Float**| The minimum amount of choline in milligrams the recipe must have. | [optional] 
 **max_choline** | **Float**| The maximum amount of choline in milligrams the recipe can have. | [optional] 
 **min_cholesterol** | **Float**| The minimum amount of cholesterol in milligrams the recipe must have. | [optional] 
 **max_cholesterol** | **Float**| The maximum amount of cholesterol in milligrams the recipe can have. | [optional] 
 **min_fluoride** | **Float**| The minimum amount of fluoride in milligrams the recipe must have. | [optional] 
 **max_fluoride** | **Float**| The maximum amount of fluoride in milligrams the recipe can have. | [optional] 
 **min_saturated_fat** | **Float**| The minimum amount of saturated fat in grams the recipe must have. | [optional] 
 **max_saturated_fat** | **Float**| The maximum amount of saturated fat in grams the recipe can have. | [optional] 
 **min_vitamin_a** | **Float**| The minimum amount of Vitamin A in IU the recipe must have. | [optional] 
 **max_vitamin_a** | **Float**| The maximum amount of Vitamin A in IU the recipe can have. | [optional] 
 **min_vitamin_c** | **Float**| The minimum amount of Vitamin C in milligrams the recipe must have. | [optional] 
 **max_vitamin_c** | **Float**| The maximum amount of Vitamin C in milligrams the recipe can have. | [optional] 
 **min_vitamin_d** | **Float**| The minimum amount of Vitamin D in micrograms the recipe must have. | [optional] 
 **max_vitamin_d** | **Float**| The maximum amount of Vitamin D in micrograms the recipe can have. | [optional] 
 **min_vitamin_e** | **Float**| The minimum amount of Vitamin E in milligrams the recipe must have. | [optional] 
 **max_vitamin_e** | **Float**| The maximum amount of Vitamin E in milligrams the recipe can have. | [optional] 
 **min_vitamin_k** | **Float**| The minimum amount of Vitamin K in micrograms the recipe must have. | [optional] 
 **max_vitamin_k** | **Float**| The maximum amount of Vitamin K in micrograms the recipe can have. | [optional] 
 **min_vitamin_b1** | **Float**| The minimum amount of Vitamin B1 in milligrams the recipe must have. | [optional] 
 **max_vitamin_b1** | **Float**| The maximum amount of Vitamin B1 in milligrams the recipe can have. | [optional] 
 **min_vitamin_b2** | **Float**| The minimum amount of Vitamin B2 in milligrams the recipe must have. | [optional] 
 **max_vitamin_b2** | **Float**| The maximum amount of Vitamin B2 in milligrams the recipe can have. | [optional] 
 **min_vitamin_b5** | **Float**| The minimum amount of Vitamin B5 in milligrams the recipe must have. | [optional] 
 **max_vitamin_b5** | **Float**| The maximum amount of Vitamin B5 in milligrams the recipe can have. | [optional] 
 **min_vitamin_b3** | **Float**| The minimum amount of Vitamin B3 in milligrams the recipe must have. | [optional] 
 **max_vitamin_b3** | **Float**| The maximum amount of Vitamin B3 in milligrams the recipe can have. | [optional] 
 **min_vitamin_b6** | **Float**| The minimum amount of Vitamin B6 in milligrams the recipe must have. | [optional] 
 **max_vitamin_b6** | **Float**| The maximum amount of Vitamin B6 in milligrams the recipe can have. | [optional] 
 **min_vitamin_b12** | **Float**| The minimum amount of Vitamin B12 in micrograms the recipe must have. | [optional] 
 **max_vitamin_b12** | **Float**| The maximum amount of Vitamin B12 in micrograms the recipe can have. | [optional] 
 **min_fiber** | **Float**| The minimum amount of fiber in grams the recipe must have. | [optional] 
 **max_fiber** | **Float**| The maximum amount of fiber in grams the recipe can have. | [optional] 
 **min_folate** | **Float**| The minimum amount of folate in micrograms the recipe must have. | [optional] 
 **max_folate** | **Float**| The maximum amount of folate in micrograms the recipe can have. | [optional] 
 **min_folic_acid** | **Float**| The minimum amount of folic acid in micrograms the recipe must have. | [optional] 
 **max_folic_acid** | **Float**| The maximum amount of folic acid in micrograms the recipe can have. | [optional] 
 **min_iodine** | **Float**| The minimum amount of iodine in micrograms the recipe must have. | [optional] 
 **max_iodine** | **Float**| The maximum amount of iodine in micrograms the recipe can have. | [optional] 
 **min_iron** | **Float**| The minimum amount of iron in milligrams the recipe must have. | [optional] 
 **max_iron** | **Float**| The maximum amount of iron in milligrams the recipe can have. | [optional] 
 **min_magnesium** | **Float**| The minimum amount of magnesium in milligrams the recipe must have. | [optional] 
 **max_magnesium** | **Float**| The maximum amount of magnesium in milligrams the recipe can have. | [optional] 
 **min_manganese** | **Float**| The minimum amount of manganese in milligrams the recipe must have. | [optional] 
 **max_manganese** | **Float**| The maximum amount of manganese in milligrams the recipe can have. | [optional] 
 **min_phosphorus** | **Float**| The minimum amount of phosphorus in milligrams the recipe must have. | [optional] 
 **max_phosphorus** | **Float**| The maximum amount of phosphorus in milligrams the recipe can have. | [optional] 
 **min_potassium** | **Float**| The minimum amount of potassium in milligrams the recipe must have. | [optional] 
 **max_potassium** | **Float**| The maximum amount of potassium in milligrams the recipe can have. | [optional] 
 **min_selenium** | **Float**| The minimum amount of selenium in micrograms the recipe must have. | [optional] 
 **max_selenium** | **Float**| The maximum amount of selenium in micrograms the recipe can have. | [optional] 
 **min_sodium** | **Float**| The minimum amount of sodium in milligrams the recipe must have. | [optional] 
 **max_sodium** | **Float**| The maximum amount of sodium in milligrams the recipe can have. | [optional] 
 **min_sugar** | **Float**| The minimum amount of sugar in grams the recipe must have. | [optional] 
 **max_sugar** | **Float**| The maximum amount of sugar in grams the recipe can have. | [optional] 
 **min_zinc** | **Float**| The minimum amount of zinc in milligrams the recipe must have. | [optional] 
 **max_zinc** | **Float**| The maximum amount of zinc in milligrams the recipe can have. | [optional] 
 **offset** | **Integer**| The number of results to skip (between 0 and 900). | [optional] 
 **number** | **Integer**| The maximum number of items to return (between 1 and 100). Defaults to 10. | [optional] [default to 10]
 **random** | **Boolean**| If true, every request will give you a random set of recipes within the requested limits. | [optional] 
 **limit_license** | **Boolean**| Whether the recipes should have an open license that allows display with proper attribution. | [optional] [default to true]

### Return type

[**Array&lt;InlineResponse2002&gt;**](InlineResponse2002.md)

### Authorization

[apiKeyScheme](../README.md#apiKeyScheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## summarize_recipe

> InlineResponse20014 summarize_recipe(id)

Summarize Recipe

Automatically generate a short description that summarizes key information about the recipe.

### Example

```ruby
# load the gem
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure API key authorization: apiKeyScheme
  config.api_key['apiKey'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['apiKey'] = 'Bearer'
end

api_instance = OpenapiClient::RecipesApi.new
id = 1 # Integer | The item's id.

begin
  #Summarize Recipe
  result = api_instance.summarize_recipe(id)
  p result
rescue OpenapiClient::ApiError => e
  puts "Exception when calling RecipesApi->summarize_recipe: #{e}"
end
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| The item&#39;s id. | 

### Return type

[**InlineResponse20014**](InlineResponse20014.md)

### Authorization

[apiKeyScheme](../README.md#apiKeyScheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## visualize_equipment

> String visualize_equipment(opts)

Equipment Widget

Visualize the equipment used to make a recipe.

### Example

```ruby
# load the gem
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure API key authorization: apiKeyScheme
  config.api_key['apiKey'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['apiKey'] = 'Bearer'
end

api_instance = OpenapiClient::RecipesApi.new
opts = {
  content_type: 'application/json', # String | The content type.
  accept: 'application/json' # String | Accept header.
}

begin
  #Equipment Widget
  result = api_instance.visualize_equipment(opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Exception when calling RecipesApi->visualize_equipment: #{e}"
end
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **content_type** | **String**| The content type. | [optional] 
 **accept** | **String**| Accept header. | [optional] 

### Return type

**String**

### Authorization

[apiKeyScheme](../README.md#apiKeyScheme)

### HTTP request headers

- **Content-Type**: application/x-www-form-urlencoded
- **Accept**: text/html


## visualize_price_breakdown

> String visualize_price_breakdown(opts)

Price Breakdown Widget

Visualize the price breakdown of a recipe.

### Example

```ruby
# load the gem
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure API key authorization: apiKeyScheme
  config.api_key['apiKey'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['apiKey'] = 'Bearer'
end

api_instance = OpenapiClient::RecipesApi.new
opts = {
  content_type: 'application/json', # String | The content type.
  accept: 'application/json', # String | Accept header.
  language: 'en' # String | The language of the input. Either 'en' or 'de'.
}

begin
  #Price Breakdown Widget
  result = api_instance.visualize_price_breakdown(opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Exception when calling RecipesApi->visualize_price_breakdown: #{e}"
end
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **content_type** | **String**| The content type. | [optional] 
 **accept** | **String**| Accept header. | [optional] 
 **language** | **String**| The language of the input. Either &#39;en&#39; or &#39;de&#39;. | [optional] 

### Return type

**String**

### Authorization

[apiKeyScheme](../README.md#apiKeyScheme)

### HTTP request headers

- **Content-Type**: application/x-www-form-urlencoded
- **Accept**: text/html


## visualize_recipe_equipment_by_id

> String visualize_recipe_equipment_by_id(id, opts)

Equipment by ID Widget

Visualize a recipe's equipment list.

### Example

```ruby
# load the gem
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure API key authorization: apiKeyScheme
  config.api_key['apiKey'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['apiKey'] = 'Bearer'
end

api_instance = OpenapiClient::RecipesApi.new
id = 1 # Integer | The item's id.
opts = {
  default_css: true # Boolean | Whether the default CSS should be added to the response.
}

begin
  #Equipment by ID Widget
  result = api_instance.visualize_recipe_equipment_by_id(id, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Exception when calling RecipesApi->visualize_recipe_equipment_by_id: #{e}"
end
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| The item&#39;s id. | 
 **default_css** | **Boolean**| Whether the default CSS should be added to the response. | [optional] [default to true]

### Return type

**String**

### Authorization

[apiKeyScheme](../README.md#apiKeyScheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: text/html


## visualize_recipe_ingredients_by_id

> String visualize_recipe_ingredients_by_id(id, opts)

Ingredients by ID Widget

Visualize a recipe's ingredient list.

### Example

```ruby
# load the gem
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure API key authorization: apiKeyScheme
  config.api_key['apiKey'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['apiKey'] = 'Bearer'
end

api_instance = OpenapiClient::RecipesApi.new
id = 1 # Integer | The item's id.
opts = {
  default_css: true, # Boolean | Whether the default CSS should be added to the response.
  measure: 'metric' # String | Whether the the measures should be 'us' or 'metric'.
}

begin
  #Ingredients by ID Widget
  result = api_instance.visualize_recipe_ingredients_by_id(id, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Exception when calling RecipesApi->visualize_recipe_ingredients_by_id: #{e}"
end
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| The item&#39;s id. | 
 **default_css** | **Boolean**| Whether the default CSS should be added to the response. | [optional] [default to true]
 **measure** | **String**| Whether the the measures should be &#39;us&#39; or &#39;metric&#39;. | [optional] 

### Return type

**String**

### Authorization

[apiKeyScheme](../README.md#apiKeyScheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: text/html


## visualize_recipe_nutrition

> String visualize_recipe_nutrition(opts)

Recipe Nutrition Widget

Visualize a recipe's nutritional information as HTML including CSS.

### Example

```ruby
# load the gem
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure API key authorization: apiKeyScheme
  config.api_key['apiKey'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['apiKey'] = 'Bearer'
end

api_instance = OpenapiClient::RecipesApi.new
opts = {
  content_type: 'application/json', # String | The content type.
  accept: 'application/json', # String | Accept header.
  language: 'en' # String | The language of the input. Either 'en' or 'de'.
}

begin
  #Recipe Nutrition Widget
  result = api_instance.visualize_recipe_nutrition(opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Exception when calling RecipesApi->visualize_recipe_nutrition: #{e}"
end
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **content_type** | **String**| The content type. | [optional] 
 **accept** | **String**| Accept header. | [optional] 
 **language** | **String**| The language of the input. Either &#39;en&#39; or &#39;de&#39;. | [optional] 

### Return type

**String**

### Authorization

[apiKeyScheme](../README.md#apiKeyScheme)

### HTTP request headers

- **Content-Type**: application/x-www-form-urlencoded
- **Accept**: text/html


## visualize_recipe_nutrition_by_id

> String visualize_recipe_nutrition_by_id(id, opts)

Recipe Nutrition by ID Widget

Visualize a recipe's nutritional information as HTML including CSS.

### Example

```ruby
# load the gem
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure API key authorization: apiKeyScheme
  config.api_key['apiKey'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['apiKey'] = 'Bearer'
end

api_instance = OpenapiClient::RecipesApi.new
id = 1 # Integer | The item's id.
opts = {
  default_css: true, # Boolean | Whether the default CSS should be added to the response.
  accept: 'application/json' # String | Accept header.
}

begin
  #Recipe Nutrition by ID Widget
  result = api_instance.visualize_recipe_nutrition_by_id(id, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Exception when calling RecipesApi->visualize_recipe_nutrition_by_id: #{e}"
end
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| The item&#39;s id. | 
 **default_css** | **Boolean**| Whether the default CSS should be added to the response. | [optional] [default to true]
 **accept** | **String**| Accept header. | [optional] 

### Return type

**String**

### Authorization

[apiKeyScheme](../README.md#apiKeyScheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: text/html


## visualize_recipe_price_breakdown_by_id

> String visualize_recipe_price_breakdown_by_id(id, opts)

Price Breakdown by ID Widget

Visualize a recipe's price breakdown.

### Example

```ruby
# load the gem
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure API key authorization: apiKeyScheme
  config.api_key['apiKey'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['apiKey'] = 'Bearer'
end

api_instance = OpenapiClient::RecipesApi.new
id = 1 # Integer | The item's id.
opts = {
  default_css: true # Boolean | Whether the default CSS should be added to the response.
}

begin
  #Price Breakdown by ID Widget
  result = api_instance.visualize_recipe_price_breakdown_by_id(id, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Exception when calling RecipesApi->visualize_recipe_price_breakdown_by_id: #{e}"
end
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| The item&#39;s id. | 
 **default_css** | **Boolean**| Whether the default CSS should be added to the response. | [optional] [default to true]

### Return type

**String**

### Authorization

[apiKeyScheme](../README.md#apiKeyScheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: text/html


## visualize_recipe_taste

> String visualize_recipe_taste(opts)

Recipe Taste Widget

Visualize a recipe's taste information as HTML including CSS. You can play around with that endpoint!

### Example

```ruby
# load the gem
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure API key authorization: apiKeyScheme
  config.api_key['apiKey'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['apiKey'] = 'Bearer'
end

api_instance = OpenapiClient::RecipesApi.new
opts = {
  language: 'en', # String | The language of the input. Either 'en' or 'de'.
  content_type: 'application/json', # String | The content type.
  accept: 'application/json', # String | Accept header.
  normalize: true, # Boolean | Whether to normalize to the strongest taste.
  rgb: '75,192,192' # String | Red, green, blue values for the chart color.
}

begin
  #Recipe Taste Widget
  result = api_instance.visualize_recipe_taste(opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Exception when calling RecipesApi->visualize_recipe_taste: #{e}"
end
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **language** | **String**| The language of the input. Either &#39;en&#39; or &#39;de&#39;. | [optional] 
 **content_type** | **String**| The content type. | [optional] 
 **accept** | **String**| Accept header. | [optional] 
 **normalize** | **Boolean**| Whether to normalize to the strongest taste. | [optional] 
 **rgb** | **String**| Red, green, blue values for the chart color. | [optional] 

### Return type

**String**

### Authorization

[apiKeyScheme](../README.md#apiKeyScheme)

### HTTP request headers

- **Content-Type**: application/x-www-form-urlencoded
- **Accept**: text/html


## visualize_recipe_taste_by_id

> String visualize_recipe_taste_by_id(id, opts)

Recipe Taste by ID Widget

Get a recipe's taste. The tastes supported are sweet, salty, sour, bitter, savory, and fatty.

### Example

```ruby
# load the gem
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure API key authorization: apiKeyScheme
  config.api_key['apiKey'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['apiKey'] = 'Bearer'
end

api_instance = OpenapiClient::RecipesApi.new
id = 1 # Integer | The item's id.
opts = {
  normalize: true, # Boolean | Whether to normalize to the strongest taste.
  rgb: '75,192,192' # String | Red, green, blue values for the chart color.
}

begin
  #Recipe Taste by ID Widget
  result = api_instance.visualize_recipe_taste_by_id(id, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Exception when calling RecipesApi->visualize_recipe_taste_by_id: #{e}"
end
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| The item&#39;s id. | 
 **normalize** | **Boolean**| Whether to normalize to the strongest taste. | [optional] [default to true]
 **rgb** | **String**| Red, green, blue values for the chart color. | [optional] 

### Return type

**String**

### Authorization

[apiKeyScheme](../README.md#apiKeyScheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: text/html
