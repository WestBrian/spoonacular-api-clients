/*
 * spoonacular API
 *
 * The spoonacular Nutrition, Recipe, and Food API allows you to access over 380,000 recipes, thousands of ingredients, 800,000 food products, and 100,000 menu items. Our food ontology and semantic recipe search engine makes it possible to search for recipes using natural language queries, such as \"gluten free brownies without sugar\" or \"low fat vegan cupcakes.\" You can automatically calculate the nutritional information for any recipe, analyze recipe costs, visualize ingredient lists, find recipes for what's in your fridge, find recipes based on special diets, nutritional requirements, or favorite ingredients, classify recipes into types and cuisines, convert ingredient amounts, or even compute an entire meal plan. With our powerful API, you can create many kinds of food and especially nutrition apps.  Special diets/dietary requirements currently available include: vegan, vegetarian, pescetarian, gluten free, grain free, dairy free, high protein, whole 30, low sodium, low carb, Paleo, ketogenic, FODMAP, and Primal.
 *
 * The version of the OpenAPI document: 1.1
 * Contact: mail@spoonacular.com
 * Generated by: https://openapi-generator.tech
 */




#[derive(Clone, Debug, PartialEq, Default, Serialize, Deserialize)]
pub struct GetIngredientInformation200ResponseNutrition {
    #[serde(rename = "nutrients")]
    pub nutrients: Vec<crate::models::ParseIngredients200ResponseInnerNutritionNutrientsInner>,
    #[serde(rename = "properties")]
    pub properties: Vec<crate::models::ParseIngredients200ResponseInnerNutritionPropertiesInner>,
    #[serde(rename = "caloricBreakdown")]
    pub caloric_breakdown: Box<crate::models::ParseIngredients200ResponseInnerNutritionCaloricBreakdown>,
    #[serde(rename = "weightPerServing")]
    pub weight_per_serving: Box<crate::models::ParseIngredients200ResponseInnerNutritionWeightPerServing>,
}

impl GetIngredientInformation200ResponseNutrition {
    pub fn new(nutrients: Vec<crate::models::ParseIngredients200ResponseInnerNutritionNutrientsInner>, properties: Vec<crate::models::ParseIngredients200ResponseInnerNutritionPropertiesInner>, caloric_breakdown: crate::models::ParseIngredients200ResponseInnerNutritionCaloricBreakdown, weight_per_serving: crate::models::ParseIngredients200ResponseInnerNutritionWeightPerServing) -> GetIngredientInformation200ResponseNutrition {
        GetIngredientInformation200ResponseNutrition {
            nutrients,
            properties,
            caloric_breakdown: Box::new(caloric_breakdown),
            weight_per_serving: Box::new(weight_per_serving),
        }
    }
}


